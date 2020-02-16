/**
    editor_rmShoeb
    started_at_0025_2/24/2018
    finished_at_0041_2/24/2018
**/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;

int main(void)
{
    double sum=0;
    double temp;
    int i;

    for(i=2;i<5;i++)
    {
        cin>>temp;
        sum+=(temp*i);
    }
    cin>>temp;
    sum+=temp;
    sum/=10;
    printf("Media: %.1f\n",sum);
    if(sum>=7)
        cout<<"Aluno aprovado."<<endl;
    else if(sum<5)
        cout<<"Aluno reprovado."<<endl;
    else
    {
        cout<<"Aluno em exame."<<endl;
        cin>>temp;
        printf("Nota do exame: %.1f\n",temp);
        sum+=temp;
        sum/=2;
        if(sum<5)
            cout<<"Aluno reprovado."<<endl;
        else
            cout<<"Aluno aprovado."<<endl;
        printf("Media final: %.1f\n",sum);
    }
}
