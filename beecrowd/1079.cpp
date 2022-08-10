#include <iostream>
 
using namespace std;
 
int main() {
    int n{0};
    cin >> n;
    
    double sum{0};
    double temp{0};
    double weights[]{2,3,5};

    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=0; j<3; j++){
            cin >> temp;
            sum += temp*weights[j];
        }
        printf("%.1lf\n", sum/10);
    }
 
    return 0;
}