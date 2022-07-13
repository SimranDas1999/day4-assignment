#include<stdio.h>
int check(int,int);
void main()
{
	int num,pos,r;
	
	printf("Enter the number and position : ");
	scanf("%d%d", &num, &pos);
	if(r==0)
		printf("Position %d bit is clear\n",pos);
	else
		printf("Position %d bit is set\n",pos);
}


int check(int num, int pos)
{
	char i;
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");

	}
	printf("/n");
	for(i=31;i>=0;i--)
	{
		if((num>>pos&1)==0)
			return 0;
		else
			return 1;
	}

}
