#include <iostream>
#include <cstdint>
using namespace std;

int main(void){
    uint16_t n;
    cin >> n;
    if(n%2 == 1) printf("Weird\n");
    else{
        if(n<5) printf("Not Weird\n");
        else if(n<=20) printf("Weird");
        else printf("Not Weird");
    }
    return 0;
}
