/* UVA --> 495 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, i, y, z, n;
    while(cin >> n)
    {
        for(i=0,x=0,y=1; i<n; i++)
        {
            z=x+y;
            x=y;
            y=z;
        }
        cout << "The Fibonacci number for " << n << " is " << x << endl;
    }
    return 0;
}
