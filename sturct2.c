#include<stdio.h>
struct student{
    char name[10];
    int roll;
    int age;
}s[10];
int main()
{
    int n,i;
     printf("enter the no of student");
     scanf("%d",&n);
    printf(" \n === Infor deatails===");
    for(i=0;i<n;i++)
    {
        printf(" \n enter the name");
        scanf("%s",s[i].name);
        printf("enter the roll");
        scanf("%d",&s[i].roll);
        printf("enter the age");
        scanf("%d",&s[i].age);
    }
    printf(" === details===");
    for(i=0;i<n;i++)
    {
        printf("\n name :%s" , s[i].name);
        printf("\n roll  :%d",s[i].roll);
        printf("\n age :%d",s[i].age);
    }
    return 0;
}
