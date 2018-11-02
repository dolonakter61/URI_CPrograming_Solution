#include<stdio.h>
int main()
{
    double fixed_salary,total_sell,total_salary;
    char name[50];
    scanf("%s",&name);
    scanf("%lf%lf",&fixed_salary, &total_sell);
    total_salary=fixed_salary+(0.15*total_sell);
    printf("TOTAL = R$ %.2lf\n",total_salary);
    return 0;
}
