/* UVA --> 483 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s1, s2="", s3="";
    while(getline(cin, s1))
    {
        for(i=0; i<s1.length(); i++)
        {
            if(s1[i]==' '&&s2.compare("")!=0)
            {
                reverse(s2.begin(), s2.end());
                s3 += s2 + " ";
                s2.clear();
            }
            else
                s2 += s1[i];
        }
        reverse(s2.begin(), s2.end());
        s3 += s2;
        cout << s3 << endl;
        s2.clear();
        s3.clear();
    }
    return 0;
}
