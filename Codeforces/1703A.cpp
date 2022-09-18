#include <iostream>
#include <string>
using namespace std;

int main(void){
    int n{0};
    string str{""};
    char yes[]{'y', 'e', 's', 'Y', 'E', 'S'};
    bool flag{true};

    cin >> n;

    while(n--){
        cin >> str;
        flag = true;
        for(int i=0; i<3; i++){
            if(str[i]!=yes[i] and str[i]!=yes[3+i]){
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}