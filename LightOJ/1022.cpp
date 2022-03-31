    #include<iostream>
    #include<cstdio>
    #include<cmath>
    using namespace std;
     
    int main(void)
    {
        int t,i;
        double r;
        double area;
        double pi;
        pi=2*acos(0.0);
     
        cin>>t;
        for(i=1;i<=t;i++)
        {
            cin>>r;
            //area=r*r*0.85840734;
            area=(4-pi)*r*r;
            printf("Case %d: %0.2f\n",i,area);
        }
    }
