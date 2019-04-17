/* UVA --> 11364 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,num,maximum,minimum;
    cin>>t;
    while(t--)
    {
        cin>>n>>maximum;
        minimum=maximum;
        for(int i=1; i<n; i++){
            cin>>num;
            if(num>maximum)
                maximum=num;
            if(num<minimum)
                minimum=num;
        }
        cout<<(maximum-minimum)*2<<endl;
    }
    return 0;
}
