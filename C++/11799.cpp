/* UVA --> 11799 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, highest, x, y;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin >> x >> highest;
        for(int j=1; j<x; j++)
        {
            cin >> y;
            if(y>highest)
                highest=y;
        }
        cout<<"Case "<<i<<": "<<highest<<"\n";
    }
    return 0;
}
