/* UVA --> 12279 */

#include <stdio.h>

int main(){

    int x,i,j=0,k=0,t;
    for(scanf("%d",&t),i=1; t!=0; scanf("%d",&t),j=0,k=0,i++){
        while(t!=0){
            scanf("%d",&x);
            (x!=0)?j++:k++;
            t--;
        }
        printf("Case %d: %d\n", i, j-k);
    }
    return 0;
}
