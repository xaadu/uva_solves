/* UVA --> 11547 */

#include <stdio.h>
#include <stdlib.h>
int main(){

    int x,t;
    for(scanf("%d",&t); t!=0; t--){
        scanf("%d",&x);
        /*x=((((((x*567)/9)+7492)*235)/47)-498)%10;*/
        x*=567;
        x/=9;
        x+=7492;
        x*=235;
        x/=47;
        x-=498;
        x/=10;
        x%=10;
        printf("%d\n",abs(x));
    }
    return 0;
}
