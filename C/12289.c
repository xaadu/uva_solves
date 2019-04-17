/* UVA --> 12289 */

#include <stdio.h>
#include <string.h>

int main(){
    char x[50];
    int t;
    for(scanf("%d",&t) ;t!=0; t--){
        scanf("%s", x);
        printf("%d\n",(strlen(x)==5)?3:((x[1]=='w'&&x[2]=='o')||(x[0]=='t'&&x[2]=='o')||(x[0]=='t'&&x[1]=='w'))?2:1);
    }
    return 0;
}
