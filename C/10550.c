/* UVA -> 10055 */

#include <stdio.h>

int main()
{
    int a, b, c, d, s;
    for(scanf("%d %d %d %d",&a,&b,&c,&d);a!=0||b!=0||c!=0||d!=0;scanf("%d %d %d %d",&a,&b,&c,&d)){
        s=1080;
        s+=(a<b)?(40+a-b)*9:(a-b)*9;
        s+=(b>c)?(40-b+c)*9:(c-b)*9;
        s+=(c<d)?(40+c-d)*9:(c-d)*9;
        printf("%d\n",s);
    }
    return 0;
}
