/*  UVA --> 621 */

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
    int stringLength, testCase;
    char numbers[500];

    for(scanf("%d",&testCase); testCase!=0; testCase--){
        scanf("%s",numbers);
        stringLength = strlen(numbers);
        printf("%c\n",(strcmp(numbers,"1")==0||strcmp(numbers,"4")==0||strcmp(numbers,"78")==0)?'+':(numbers[stringLength-1]=='5'&&numbers[stringLength-2]=='3')?'-':(numbers[0]=='9'&&numbers[stringLength-1]=='4')?'*':'?');
    }
    return 0;
}
