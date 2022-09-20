#include <iostream>
#include <string>
using namespace std;

int main(void){
    short t{0};
    string str{""};

    cin >> t;
    for(short i=1; i<=t; i++){
        cin >> str;
        if(str[4]!='s') str.insert(4, "s");
        cout << "Case " << i << ": " << str << endl;
    }

    return 0;
}