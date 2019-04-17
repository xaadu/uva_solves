/* UVA --> 579 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double h,m, hang, mang;
    for(scanf("%lf:%lf",&h,&m); h!=0||m!=0; scanf("%lf:%lf",&h,&m))
    {
        hang=0.5*((60*h)+m);
        mang=6.0*m;
        hang=abs(hang-mang);
        (hang>180)?printf("%.3lf\n",360-hang):printf("%.3lf\n",hang);
    }
    return 0;
}
