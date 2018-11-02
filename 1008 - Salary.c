#include<stdio.h>
int main()
{
    int num,work_hour;
    double per_hour_salary,total_salary;
    scanf("%d%d%lf",&num, &work_hour,&per_hour_salary);
    total_salary=work_hour*per_hour_salary;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2lf\n",total_salary);
    return 0;
}
