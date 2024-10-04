#include<stdio.h>
int main()
{
	int var;
	printf("press 1 for area of triangle");
	printf("press 2 for area of square");
	printf("press 3 for area of rectangle");
	printf("press 4 for area of circle");
    scanf("%d",&var);
    switch(var)
    {
    case 1:
    float h,b;
    printf("please enter the height and base");
    scanf("%f %f",&h,&b);
    printf("area of triangle is: %f",(h*b)/2);
    break;
    case 2:
    float l;
    printf("please enter the length");
    scanf("%f",&l);
    printf("area of square is: %f",(l*l));
    break;
    case 3:
    float a ,c;
    printf("please enter the length and breadth");
    scanf("%f %f",&a,&c);
    printf("area of rectangle is: %f",(a*c));
    break;
    case 4:
    float r;
    printf("please enter the radius");
    scanf("%f",&r);
    printf("area of circle is: %f",(3.14*r*r));
    break;
    default:
    printf("invalid number");
    break;

    }
    return 0;
					
}
