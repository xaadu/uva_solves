/* UVA --> 10929 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,s,sign;
    char x[2000];
    while(gets(x)&&strcmp(x,"0")!=0){
        for(i=0,s=0,sign=1; x[i]!='\0'; i++,sign*=(-1))
            s+=(sign*(x[i]-48));
        if(s%11==0)
            cout<<x<<" is a multiple of 11.\n";
        else
            cout<<x<<" is not a multiple of 11.\n";
    }
    return 0;
}
