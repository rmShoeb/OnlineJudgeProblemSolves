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
    int l, w, h, theta;
    double milk;
    double d;

    while(scanf("%d %d %d %d", &l, &w, &h, &theta) == 4)
    {
        d = l*tan(theta*PI/180.0);
		if (d <= h)
        {
			milk = l*(h-d/2.0)*w;
		}
        else
        {
			theta = 90-theta;
			milk = (h*tan(theta*PI/180.0)*h/2.0)*w;
        }
        printf("%0.3f mL\n", milk);
    }
}
