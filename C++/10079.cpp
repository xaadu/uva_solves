/* UVA --> 10079 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=1;
    for(cin>>n; n>=0; cin>>n,c=1){
        for(i=1; i<=n; i++)
            c+=i;
        cout<<c<<"\n";
    }
    return 0;
}
