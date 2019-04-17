/* UVA --> 10107 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[1000],i,j,x;
    bool done;
    for(i=0, done=false; cin>>x; i++)
    {
        for(j=0; j<i; j++)
            if(x<ar[j])
            {
                done=true;
                for(int k=i-1; k>=j; k--)
                    ar[k]=ar[k+1];
                ar[i]=x;
                break;
            }
        if(!done)
            ar[i]=x;
        cout<<endl<<"{ ";
        for(j=0; j<=i; j++)
            cout<<ar[j]<<" ";
        cout<<"}"<<endl;

    }
    return 0;
}
