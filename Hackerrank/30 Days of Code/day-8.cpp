#include <iostream>
#include <map>
#include <utility>
#include <iterator>
#include <string>
#include <cstdint>

using namespace std;


int main() {
    int n, i;
    map<string, int> phonebook;
    string name;
    int phone;

    // input
    cin >> n;
    for(i=0; i<n; i++){
        cin >> name >> phone;
        phonebook.insert(make_pair(name, phone));
    }
    
    // queries
    while(cin >> name){
        try {
            phone = phonebook.at(name);
            cout << name << "=" << phone << endl;
        }
        catch (const std::out_of_range& oor) {
            printf("Not found\n");
        }
    }

    return 0;
}
