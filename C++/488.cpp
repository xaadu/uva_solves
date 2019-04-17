/* UVA --> 488 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,f,a,cc=0,i,j,k;
    cin >> t;
    while(t--!=0)
    {
        if(cc==0)
            cc++;
        else
            cout << endl;
        cin >> a >> f;
        for(k=1; k<=f; k++)
        {
            if(k!=1)
                cout << endl;
            for(i=1; i<=a; i++)
            {
                for(j=1; j<=i; j++)
                    cout << i;
                cout << endl;
            }
            for(i-=2; i>0; i--)
            {
                for(j=1; j<=i; j++)
                    cout << i;
                cout << endl;
            }
        }
    }
    return 0;
}
