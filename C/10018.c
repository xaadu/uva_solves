/*10018*/

#include<stdio.h>
int main()
{
    long long int x,rev,n,i=0;
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        t--;
        i=0;
        scanf("%lld",&n);
        while(1)
        {
            rev=0;
            x=n;
            while(x!=0)
            {
                rev=(rev*10)+(x%10);
                x/=10;
            }
            if(n==rev||i>1000)
                break;
            i++;
            n+=rev;
        }
        printf("%lld %lld\n",i,rev);
    }
    return 0;
}
