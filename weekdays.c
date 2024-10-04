#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a weak day");
	scanf("%d%d%d",&a,&b,&c);
	switch(c)
	{
		case 1:
			printf("add of no=%d",(a+b));
			break;
			
		case 2:
			printf("sub of no=%d",(a-b));
			break;
			
		case 3:
			printf("mul of no=%d",(a*b));
			break;
			
		case 4:
			printf("div of no=%d",(a/b));
			break;
			
			default:
				printf("failed");
				
	}
	return a0;
}
