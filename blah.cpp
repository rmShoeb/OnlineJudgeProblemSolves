#include<iostream>
using namespace std;
int main()
{
 /* we will divide finding the palindromes based on the number of digits(n) a number has*/
 /*/Case 1: n=1 ;All 1 digit numbers are palindromes
 cout<<"The palindromes from 1 to 1000 are: \n ";
 for(int i=1;i<=9;i++)
 {
  cout<<i<<"\t";
 }
 cout<<endl;*/
 //Case 2: n=2
 for(int j=10;j<100;j++)
 {
  int num1=j%10;
  int num2=j/10;
  if(num1==num2)
  {
   cout<<j<<"\t";
  }
 }
 cout<<endl;
 //Case3: n=3
 for(int k=100;k<1000;k++)
 {
  int n1=k%10;
  int n2=k/100;
  if(n1==n2)
  {
   cout<<k<<"\t";
  }
 }
}
