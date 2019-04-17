/*10055*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int x,y,z;
    while(scanf("%lld %lld",&x,&y)==2)
        z=x-y;
        z=abs(z);
        printf("%lld\n",z);
    return 0;
}
