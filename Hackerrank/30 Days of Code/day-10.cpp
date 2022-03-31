#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


// my code starts here
int max_bit(int n){
    vector<int> lengths;
    int length = 0;
    while(n>0){
        if(n%2==0){
            lengths.push_back(length);
            length = 0;
        }
        else{
            length += 1;
        }
        n /= 2;
    }
    lengths.push_back(length);
    return *max_element(lengths.begin(), lengths.end());
}
// my code ends here


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    cout << max_bit(n) << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
