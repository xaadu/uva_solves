/* UVA --> 12372 */

#include <stdio.h>

int main(){

    int t,x,y,z,i;
    for(scanf("%d",&t),i=1; i<=t; i++){
            scanf("%d %d %d",&x, &y, &z);
            printf("Case %d: %s\n",i,(x<21&&y<21&&z<21)?"good":"bad");
    }
    return 0;
}
