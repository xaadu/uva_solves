/*10783*/

#include<stdio.h>
int main()
{
    int a,b,s,n,i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        s=0;
        scanf("%d %d",&a,&b);
        if(a<b)
            for(i=a; i<=b; i++)
            {
                if(i%2!=0)
                    s+=i;
            }
        else
            for(i=b; i<=a; i++)
            {
                if(i%2!=0)
                    s+=i;
            }
        printf("Case %d: %d\n",j,s);
    }
    return 0;
}
