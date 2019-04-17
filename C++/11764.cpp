/* UVA --> 11764 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n,x,y,up=0,down=0;
    for(i=1, cin>>t; t--; i++,up=0,down=0){
        cin>>n>>x;
        for(int j=1; j<n; j++, x=y){
            cin>>y;
            (x<y)?up++:(x>y)?down++:x;
        }
        cout<<"Case "<<i<<": "<<up<<" "<<down<<"\n";
    }
    return 0;
}
