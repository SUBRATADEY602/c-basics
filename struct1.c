#include<stdio.h>
struct student{
    char name[10];
    int emp_id;
    int age;
    int sal;
}s[10];
int main()
{
    int n,i;
     printf("enter the no of employee");
     scanf("%d",&n);
    printf(" \n === Infor deatails===");
    for(i=0;i<n;i++)
    {
        printf(" \n enter the name");
        scanf("%s",s[i].name);
        printf("enter the employee-Id");
        scanf("%d",&s[i].emp_id);
        printf("enter the age");
        scanf("%d",&s[i].age);
        printf("enter the salary");
        scanf("%d",&s[i].sal);
    }
    printf(" === details===");
    for(i=0;i<n;i++)
    {
        printf("\n name :%s" , s[i].name);
        printf("\n roll  :%d",s[i].emp_id);
        printf("\n age :%d",s[i].age);
         printf("\n age :%d",s[i].sal);
    }
    return 0;
}
