#include<stdio.h>
void main()
{
	int n,m,i;
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Before flip:");
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\n");

	for(i=31;i>=0;i--)
	{
		m=m>>i&1;
		if(m)
			n=n^1<<i;
		else
			n=n^1<<i;
	}

	printf("After flip: ");

	for(i=31;i>=0;i--)
        {
                printf("%d",n>>i&1);
        }
        printf("\n");

 	
}
