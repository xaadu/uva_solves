/* UVA --> 12577 */

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
    char stringInput[30];int i;
    for(scanf("%s", stringInput),i=1;;scanf("%s", stringInput),i++){
        if(strcmp(stringInput,"*")==0)
            break;
        else if(strcmp(stringInput,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else
            printf("Case %d: Hajj-e-Asghar\n",i);
    }
    return 0;
}
