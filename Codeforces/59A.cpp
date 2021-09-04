#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::transform;

int main(int argc, char const *argv[])
{
    string word;
    int up_len = 0;
    int lo_len = 0;

    cin >> word;

    for (auto it = std::begin(word); it!=std::end(word); ++it){
        if((int)*it > 96) lo_len++;
        else up_len++;
    }
    if(up_len > lo_len) transform(std::begin(word), std::end(word), std::begin(word), ::toupper);
    else transform(std::begin(word), std::end(word), std::begin(word), ::tolower);

    cout << word << endl;

    return 0;
}
