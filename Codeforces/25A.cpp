#include <iostream>
using namespace std;

int main(void){
    int n{0};
    int values{0};
    int odd_count{0};
    int even_count{0};
    int odd_index{0};
    int even_index{0};

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> values;
        if(values%2!=0){
            odd_count++;
            odd_index = i+1;
        }
        else{
            even_count++;
            even_index = i+1;
        }
    }
    if(even_count==1) cout << even_index << endl;
    else cout << odd_index << endl;

    return 0;
}