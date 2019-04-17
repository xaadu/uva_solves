/*10038*/

#include<stdio.h>

int main()
{
    int t,i,a,b,f;
    int x[99];
    while(scanf("%d",&t)==1)
    {
        for(i=0; i<t; i++)
            scanf("%d",&x[i]);
        for(i=1,f=0; i<t; i++)
        {
            a=x[i]-x[i-1];
            a=abs(a);
            if(i==1)
            {
                b=abs(a);
                continue;
            }
            if(abs(a-b)!=1)
            {
                f=1;
                break;
            }
            b=a;
        }
        printf("%s\n",(f==0)?"Jolly":"Not jolly");
    }
    return 0;
}
