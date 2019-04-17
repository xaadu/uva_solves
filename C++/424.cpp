/* UVA --> 424 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool start;
    int i,l,c,t;
    int sum[201], num[201];
    char temp[201];
    for(i=0; i<201; i++)
        sum[i]=0;
    /*for(i=0; i<201; i++)
        cout<<sum[i];
    cout<<endl<<endl;*/

    while(gets(temp) && strcmp(temp,"0"))
    {
        l=strlen(temp);

        /*cout<<endl<<endl;
        cout<<l;
        cout<<endl<<endl;*/

        for(i=0; i<201; i++)
            num[i]=0;

        /*cout<<endl<<endl;
        for(i=0; i<201; i++)
        cout<<num[i];
        cout<<endl<<endl;*/

        for(i=0; i<l; i++)
            num[200-i]=temp[l-1-i]-48;

        /*cout<<endl<<endl;
        for(i=0; i<201; i++)
        cout<<num[i];
        cout<<endl<<endl;*/

        for(i=200,c=0; i>=0; i--)
        {
            t=sum[i]+num[i]+c;
            //cout<<endl<<sum[i]<<" "<<num[i]<<" "<<c<<" "<<t<<" ";
            sum[i]=t%10;
            //cout<<sum[i]<< " ";
            c=t/10;
            //cout<<c<<endl;
        }

        //cout<<endl;
        //cout<<endl<<endl;
        /*for(i=0; i<201; i++)
            cout<<num[i];*/
    }
    for(i=0, start=false; i<201; i++)
    {
        if(sum[i]==0 and !start)
            continue;
        else
            start=true;
        cout<<sum[i];
    }
    cout<<endl;
    return 0;
}
