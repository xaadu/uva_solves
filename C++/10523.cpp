/* UVA --> 10523 */

#include <bits/stdc++.h>
using namespace std;

/*int64_t sum(int64_t n, int64_t a)
{
    cout<<n<<a<<endl;
    if(n==1)
        return 1;
    else
        return (n*pow(a,n))+sum(n-1,a);
}
*/
int main()
{
    int64_t n,a,i,sum;
    while(cin>>n>>a){
        for(i=1,sum=0; i<=n; i++){
            sum+=(i*pow(a,i));
            //cout<<sum<<" "<<n<<endl;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
