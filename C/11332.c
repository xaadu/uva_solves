/* UVA --> 11332 */

#include <stdio.h>
#include <string.h>

long long int add(long long int x){
    if(x==0)
        return 0;
    else
        return (x%10)+add(x/10);
}


int main(int argc, char const *argv[]) {
    long long int x;

    for(scanf("%lld", &x); x!=0; scanf("%lld", &x)){
        x = add(x);
        while(x>9)
            x=add(x);

        printf("%lld\n", x);
    }

    return 0;
}
