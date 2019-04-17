/*272*/

#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,f=1;
    char st1[999],st2[999];
    while(gets(st1))
    {
        for(i=0,j=0; st1[i]!='\0'; i++,j++)
        {
            if(st1[i]==34)
            {
                if(f==0)
                {
                    st2[j]=39;
                    j++;
                    st2[j]=39;
                    f=1;
                    continue;
                }
                st2[j]=96;
                j++;
                st2[j]=96;
                f=0;
                continue;
            }
            st2[j]=st1[i];
        }
        st2[j]='\0';
        puts(st2);
    }
    return 0;
}
