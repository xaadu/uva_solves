/*458*/

#include <stdio.h>
int main()
{
    int i;
    char x[9999];
    while(scanf("%s",&x)==1)
    {
        for(i=0; x[i]!='\0'; i++)
            x[i]-=7;
        printf("%s\n",x);
    }
    return 0;
}
