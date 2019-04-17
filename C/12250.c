/* UVA --> 12250 */

#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char x[300];
    for(scanf("%s",x),i=1;; scanf("%s",x),i++){
        if(strcmp(x,"#")==0)
            break;
        printf("Case %d: %s\n",i,(strcmp(x,"HELLO")==0)?"ENGLISH":(strcmp(x,"HOLA")==0)?"SPANISH":(strcmp(x,"HALLO")==0)?"GERMAN":(strcmp(x,"BONJOUR")==0)?"FRENCH":(strcmp(x,"CIAO")==0)?"ITALIAN":(strcmp(x,"ZDRAVSTVUJTE")==0)?"RUSSIAN":"UNKNOWN");
    }
    return 0;
}
