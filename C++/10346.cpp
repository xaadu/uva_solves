/* UVA --> 10346 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k){
        for(int i=k; i<=n; i+=k)
            n++;
        cout<<n<<"\n";
    }
    return 0;
}
