/* UVA --> 10474 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool found;
    int n,q,i=1,j,k,t;
    while(cin>>n>>q && (n!=0 || q!=0))
    {
        cout<<"CASE# "<<i<<":\n";
        int x[n],y;
        for(j=0; j<n; j++)
            cin>>x[j];

        for(j=1; j<=n; j++)
            for(k=0; k<n-j; k++)
        if(x[k]>x[k+1]){t=x[k];x[k]=x[k+1];x[k+1]=t;}

        for(j=0; j<q; j++)
        {
            cin>>y;
            for(k=0,found=false; k<n; k++)
                if(y==x[k])
                {
                    found=true;
                    cout<<y<<" found at "<<k+1<<endl;
                    break;
                }
            if(!found)
                cout<<y<<" not found\n";
        }
        i++;
    }
    return 0;
}
