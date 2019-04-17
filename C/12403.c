/* UVA --> 12403 */

#include <stdio.h>
#include <string.h>
int main(){
    int t,x=0,y,s[50];
    for(scanf("%d",&t); t!=0; t--){
        scanf("%s",s);
        if(strcmp(s,"report")==0)
            printf("%d\n", x);
        else{
            scanf("%d",&y);
            x+=y;
        }
    }
    return 0;
}
