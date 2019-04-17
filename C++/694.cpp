/* UVA --> 694 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t x,l,i=1,step;
    while(cin>>x>>l && (x!=-1||l!=-1))
    {
        step=1;
        cout<<"Case "<<i<<": A = "<<x<<", limit = "<<l<<", number of terms = ";
        while(x!=1&&x<=l)
        {
            if(x%2==0)
                x/=2;
            else
                x=(3*x)+1;
            if(x>l)
                break;
            step++;
        }
        cout<<step<<endl;
        i++;
    }
    return 0;
}
