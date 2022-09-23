#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(void){
    vector<unsigned> shoe;
    vector<unsigned>::iterator it;
    unsigned temp{0};

    for(short i=0; i<4; i++){
        cin >> temp;
        it = find(shoe.begin(), shoe.end(), temp);
        if(it == shoe.end()) shoe.push_back(temp);
    }
    cout << 4-shoe.size() << endl;

    return 0;
}