/*11727*/

#include <stdio.h>
int main()
{
    int t,i,x,y,z;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        printf("Case %d: %d\n",i,((x>y&&x<z)||(x<y&&x>z))?x:((y>x&&y<z)||(y<x&&y>z))?y:z);
    }
    return 0;
}
