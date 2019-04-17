/* UVA --> 119 */

#include <bits/stdc++.h>
using namespace std;

class pp
{
public:
    string name;
    long int balance;
    pp()
    {
        name = "";
        balance = 0;
    }
};

int main()
{
    long int t,y,z,xx=1;
    string x;
    while(cin >> t)
    {
        if(xx!=1)
            cout << endl;
        xx = 0;
        pp s[t];
        for(int i=0; i<t; i++)
            cin >> s[i].name;
        for(int i=0; i<t; i++)
        {
            cin >> x >> y >> z;
            int l;
            for(l=0; x.compare(s[l].name)!=0; l++);
            (z!=0)?s[l].balance-=(y-(y%z)):z;
            for(int j=0; j<z; j++)
            {
                cin >> x;
                for(int k=0; k<t; k++)
                    if(x.compare(s[k].name)==0)
                        s[k].balance+=(y/((z<2)?1:z));
            }
        }
        for(int i=0; i<t; i++)
            cout << s[i].name << " " << s[i].balance << endl;
    }
    return 0;
}
