/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
//Back-end complete function Template for C++
// Function to take input of string using getline
void getLineAndIgnore(){
    
    string a, d;
    int b;
   
    // Your code here
    getline(cin, a);
    cin >> b;
    cin.ignore();
    getline(cin, d);
    
   
    cout << a << endl;
    
    cout << b << endl;
        
    cout << d << endl;
}