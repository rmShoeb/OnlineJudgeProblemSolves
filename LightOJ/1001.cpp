    #include<iostream>
    #include<cstdlib>
    #include<cstdio>
    #include<vector>
    using namespace std;
    int main(void)
    {
        int test;
        cin>>test;
        int i=0;
        int no;
        vector<int>data;
        while(i<test)
        {
            cin>>no;
            i++;
            data.push_back(no);
        }
        for(i=0;i<test;i++)
        {
            no=data[i]/2;
            cout<<no<<" ";
            data[i]-=no;
            cout<<data[i]<<endl;
        }
    }
     
