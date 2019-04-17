/* UVA --> 10038 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ls1, ls2, diff, oldDiff, i, t;
    bool seq;
    while(cin>>n)
    {
        int dodf[--n];
        seq = true;
        cin>>ls1;
        for(i=0; i<n; i++)
        {
            cin>>ls2;
            diff = abs(ls1-ls2);
            dodf[i] = diff;
            //cout<<dodf[i]<<endl;
            oldDiff=diff;
            ls1=ls2;
        }
        for(i=1; i<=n; i++)
            for(int j=0; j<n-i; j++)
                if(dodf[j]>dodf[j+1])
                {
                    t=dodf[j];
                    dodf[j]=dodf[j+1];
                    dodf[j+1]=t;
                }
        /*cout<<endl;
        for(i=0; i<n; i++)
            cout<<dodf[i]<<endl;
        cout<<endl;*/
        if(n==1 && dodf[0]!=1)
            seq=false;
        else
            for(i=0; i<n-1; i++)
                if(!(dodf[0]==1 && dodf[i]+1==dodf[i+1]))
                {
                    seq=false;
                    break;
                }
        if(seq)
            cout<<"Jolly\n";
        else
            cout<<"Not jolly\n";
    }
    return 0;
}
