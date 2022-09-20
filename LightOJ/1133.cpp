    #include<iostream>
    #include<cstdio>
    #include<cstdlib>
    #include<cmath>
    #include<vector>
    #include<stdint.h>
    #include<algorithm>
    using namespace std;
     
    int main(void)
    {
        int t;
        int n,m;
        int i;
        int temp;
        char case_c;
        int case_int;
        int it;
     
        cin>>t;
        for(it=0;it<t;it++)
        {
            vector<int>input;
            cin>>n>>m;
            for(i=0;i<n;i++)
            {
                cin>>temp;
                input.push_back(temp);
            }
            while(m--)
            {
                cin>>case_c;
                switch(case_c)
                {
                case 'S':
                    cin>>case_int;
                    for(i=0;i<n;i++)
                        input[i]+=case_int;
                    break;
     
                case 'M':
                    cin>>case_int;
                    for(i=0;i<n;i++)
                        input[i]*=case_int;
                    break;
     
                case 'D':
                    cin>>case_int;
                    for(i=0;i<n;i++)
                        input[i]/=case_int;
                    break;
     
                case 'R':
                    reverse(input.begin(), input.end());
                    break;
     
                case 'P':
                    cin>>case_int>>i;
                    temp=input[case_int];
                    input[case_int]=input[i];
                    input[i]=temp;
                    break;
                }
            }
            cout<<"Case "<<it+1<<":\n";
            for(i=0;i<n-1;i++)
                cout<<input[i]<<" ";
            cout<<input[i]<<endl;
        }
    }
