/* UVA --> 374 */

#include <bits/stdc++.h>
using namespace std;

int64_t fast_exp(int base, int exp)
{
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            int64_t base1 = pow(fast_exp(base, exp/2),2);
            if(base1 >= 1000000007)
            return base1%1000000007;
            else
            return base1;
        }
        else
        {
            int64_t ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            if(ans >= 1000000007)
            return ans%1000000007;
            else
            return ans;
        }
    }
}

int main(){
    long double b,p,m,x;
    cin >>b>>p>>m;
    x=1;
    /*while(p>0){
        if(p&1)
            x*=b;
        b*=b;
        p>>=1;
    }*/
    cout<<((long long int(pow(b,p)))%m)<<"\n";
    return 0;
}
