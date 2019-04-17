#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,carry=0,c=0;
    for(cin >> x >> y; x!=0||y!=0; cin >> x >> y,carry=0,c=0)
    {
        while(x!=0||y!=0)
        {
            if((x%10)+(y%10)+carry > 9)
                carry = 1;
            else
                carry = 0;
            x/=10;
            y/=10;
            if(carry!=0) c++;
        }
        (c==1)?cout << "1 carry operation." << endl:(c>1)?cout << c << " carry operations." << endl:cout << "No carry operation." << endl;
    }
    return 0;
}
