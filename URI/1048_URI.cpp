#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    int increase;

    double salary, new_salary;
    cin>>salary;

    if(salary>=0&&salary<=400)
    {
        new_salary=(salary*0.15)+salary;
        increase=15;
    }
    else if(salary>400&&salary<=800)
    {
        new_salary=(salary*0.12)+salary;
        increase=12;
    }
    else if(salary>800&&salary<=1200)
    {
        new_salary=(salary*0.10)+salary;
        increase=10;
    }
    else if(salary>1200&&salary<=2000)
    {
        new_salary=(salary*0.07)+salary;
        increase=7;
    }
    else
    {
        new_salary=(salary*0.04)+salary;
        increase=4;
    }

    printf("Novo salario: %0.2f",new_salary);
    cout<<endl;
    printf("Reajuste ganho: %0.2f",new_salary-salary);
    cout<<endl;
    printf("Em percentual: %d %%",increase);
    cout<<endl;
}
