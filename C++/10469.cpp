/* UVA --> 424 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool start;
    int64_t i,j,n1,n2,s,result;
    int num1[32], num2[32], res[32];

    while(cin>>n1>>n2)
    {
        for(i=0; i<32; i++)
        {
            num1[i]=0;
            num2[i]=0;
        }

        i=31;
        while(n1!=0)
        {
            num1[i]=n1%2;
            n1/=2;
            i--;
        }
        i=31;
        while(n2!=0)
        {
            num2[i]=n2%2;
            n2/=2;
            i--;
        }

        /*for(i=0; i<32; i++)
            cout<<num1[i];
        cout<<endl;
        for(i=0; i<32; i++)
            cout<<num2[i];
        cout<<endl<<endl;*/

        for(i=0; i<32; i++)
            res[i]=(num1[i]+num2[i])%2;

        for(i=0; i<32; i++)
            if(res[i]!=0)
                break;
        s=i;
        //cout<<s<<endl;
        for(result=0,i=31,j=0; i>=s; i--, j++){
            result+=(res[i]*pow(2,j));
            //cout<<res[i]<<" "<<pow(2,j)<<" "<<j<<" "<<result<<endl;
        }

        /*for(i=0, start=false; i<32; i++)
        {
            if(res[i]==0 and !start)
                continue;
            else
                start=true;
            cout<<res[i];
        }
        cout<<endl;*/
        cout<<result<<endl;
    }
    return 0;
}
