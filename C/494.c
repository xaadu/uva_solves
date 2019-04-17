/*494*/

#include<stdio.h>

int main()
{
    int i,j,c;
    char x[999];
    while(gets(x))
    {
        for(i=0,c=0; x[i]!='\0'; i++)
        {
            if((x[i]>64&&x[i]<91)||(x[i]>96&&x[i]<123))
            {
                if((x[i+1]>64&&x[i+1]<91)||(x[i+1]>96&&x[i+1]<123))
                    continue;
                else
                    c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
