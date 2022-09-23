#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n{0};
    unsigned c{0};
    unsigned r{0};
    unsigned s{0};
    char animal{'x'};
    unsigned count{0};

    cin >> n;
    while(n--){
        cin >> count >> animal;
        // cout << count << endl;
        switch(animal){
            case 'C':
                c += count;
                break;
            case 'R':
                r += count;
                break;
            case 'S':
                s += count;
                break;
            default:
                break;
        }
    }
    printf("Total: %d cobaias\n"
    "Total de coelhos: %d\n"
    "Total de ratos: %d\n"
    "Total de sapos: %d\n"
    "Percentual de coelhos: %.2lf %%\n"
    "Percentual de ratos: %.2lf %%\n"
    "Percentual de sapos: %.2lf %%\n",
    c+r+s,
    c,r,s,
    100*c/static_cast<double>(c+r+s),
    100*r/static_cast<double>(c+r+s),
    100*s/static_cast<double>(c+r+s));

    return 0;
}