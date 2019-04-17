/* UVA --> 591 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,i,se=1;
    for(cin >> t; t!=0; cin >> t, se++)
    {
        int x[t], s=0, c=0;
        for(i=0; i<t; i++)
        {
            cin >> x[i];
            s+=x[i];
        }
        s/=t;
        for(i=0; i<t; i++)
            if(x[i]>s)
                c+=(x[i]-s);
        cout << "Set #" << se << endl << "The minimum number of moves is " << c << "." << endl << endl;
    }
    return 0;
}
