/* UVA --> 10812 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(y>x || (x+y)%2!=0)
            cout<<"impossible\n";
        else
            cout<<(x+y)/2<<" "<<(x-(x+y)/2)<<"\n";
    }
}
