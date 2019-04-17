/* UVA --> 575 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t x, i, j,total;
    char bin[100];
    while(gets(bin)&&strcmp(bin, "0"))
    {
        for(i=strlen(bin)-1, total=0, j=1; i>=0; i--, j++)
        {
            x=bin[i]-48;
            //cout<<x<<endl;
            total+=(x*(pow(2,j)-1));
        }
        cout<<total<<endl;
    }
    return 0;
}
