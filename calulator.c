#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 1 for add\n enter 2 for sub\n enter 3 for mul\n enter 4 for div\n");
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
