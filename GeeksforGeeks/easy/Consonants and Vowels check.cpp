/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
void checkString(string s)
{
    int v=0;
    int c=0;
    int i;
    
    //Your code here
    for(i=0; i<s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            v++;
        else if(s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'j' || s[i] == 'k' ||
                s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' ||
                s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
            c++;
    }
    
    if(v>c)
    cout<<"Yes";
    else if(c>v)
    cout<<"No";
    else
    cout<<"Same";
    
    cout<<endl;
}