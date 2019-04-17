/* UVA --> 10110 */

#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

int main()
{
    int64_t n, i, x;

    for(cin>>n; n!=0; cin>>n){
        x = sqrt(n);
        cout<<((x*x==n)?"yes\n":"no\n");
    }


    /*bool ison;
    for(cin>>n; n!=0; cin>>n)
    {
        ison=false;
        for(i=1; i<=n; i++)
            if(n%i==0)
                ison = !ison;
        cout<<((ison==true)?"yes":"no")<<"\n";
    }*/
    return 0;
}
