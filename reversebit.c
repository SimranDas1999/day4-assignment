#include<stdio.h>
void bit_reverse(int);
void main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	bit_reverse(n);
}

void bit_reverse(int n)
{
	char i,j,p,q;
	printf("Before Reversing\n");
	for(i=31;i>=0;i--)
	{
		printf("%d", n>>i&1);
		if(i%8==0)
		{
			printf(" ");
		}

	}
	printf("\n");
	for(i=0,j=31;i<j;i++,j--)
	{
		p=n>>i&1;
		q=n>>j&1;
		if(p!=q)
		{
			n=n^1<<i;
			n=n^1<<j;
		}
	}
	printf("After reversing\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
		if(i&8==0)
			printf(" ");
	}
	printf("\n");

}
