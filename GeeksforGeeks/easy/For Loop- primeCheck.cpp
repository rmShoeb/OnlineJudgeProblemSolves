/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
//Complete this function
void isPrime(int n)
{
    int i;
    bool prime = true;
    if(n>1)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            //Write your logic here
            if(n%i == 0)
            {
                prime = false;
                break;
            }
        }
    }
    else
        prime = false;
    if(prime)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}