/* UVA --> 10370 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, avc, i;
    long long int s;
    double av;
    cin >> t;
    while(t-->0){
        cin >> n;
        s=0;
        avc=0;
        long long int x[n];
        for(i=0; i<n; i++){
            cin >> x[i];
            s += x[i];
        }
        av = (double)s/n;
        for(i=0; i<n; i++)
                if(x[i]>av)
                    avc++;
        av = (double)avc/n*100;
        printf("%.3lf%%\n",av);
    }
    return 0;
}
