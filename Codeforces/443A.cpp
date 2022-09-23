#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(void){
    unsigned short letter[26]{0};
    string input;
    unsigned short length{0};
    unsigned short distinct{0};

    getline(cin, input);
    length = input.length();

    for(unsigned short i=1; i<length-1; i++){
        if(input[i]!=',' and input[i]!=' ')
            letter[input[i]-'a']++;
    }
    for(unsigned short i=0; i<26; i++){
        if(letter[i]!=0) distinct++;
    }
    cout << distinct << endl;

    return 0;
}