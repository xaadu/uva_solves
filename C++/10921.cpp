/* UVA --> 10921 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[100];
    while(gets(c))
    {
        for(int i=0; c[i]!='\0'; i++)
        {
            if(c[i]>=65 && c[i]<=67)
                cout<<2;
            else if(c[i]>=68 && c[i]<=70)
                cout<<3;
            else if(c[i]>=71 && c[i]<=73)
                cout<<4;
            else if(c[i]>=74 && c[i]<=76)
                cout<<5;
            else if(c[i]>=77 && c[i]<=79)
                cout<<6;
            else if(c[i]>=80 && c[i]<=83)
                cout<<7;
            else if(c[i]>=84 && c[i]<=86)
                cout<<8;
            else if(c[i]>=87 && c[i]<=90)
                cout<<9;
            else
                cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}
