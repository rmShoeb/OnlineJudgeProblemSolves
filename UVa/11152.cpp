#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iomanip>
#define PI acos(-1)
using namespace std;

int main(void)
{
    int a, b, c;
    double s;
    double tri_area;
    double out_cir_r;
    double out_cir_area;
    double in_cir_r;
    double in_cir_area;

    while(scanf("%d %d %d", &a, &b, &c) == 3)
    {
        //cin >> a >> b >> c;
        s = (a+b+c)/2.0;
        tri_area = sqrt(s*(s-a)*(s-b)*(s-c));
        out_cir_r = (a*b*c/(4.0*tri_area));
        out_cir_area = PI*out_cir_r*out_cir_r;
        out_cir_area -= tri_area;
        in_cir_r = (tri_area/s);
        in_cir_area = PI*in_cir_r*in_cir_r;
        tri_area -= in_cir_area;

        printf("%0.4lf %0.4lf %0.4lf\n", out_cir_area, tri_area, in_cir_area);
    }
}
