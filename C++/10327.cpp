/* UVA --> 10327 */

#include <bits/stdc++.h>
using namespace std;

bool sorted(int data[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(data[i]>data[i+1])
            return false;
    }
    return true;
}



int main()
{
    int n,i,j,c,temp;
    while(cin>>n)
    {
        bool enD;
        int data[n];
        for(i=0; i<n; i++)
            cin>>data[i];
        for(i=1,c=0,enD=false; i<=n&&!enD; i++)
            for(j=0; j<n-i&&!enD; j++)
            {
                if(data[j]>data[j+1])
                {
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                    c++;
                }
                if(sorted(data,n))
                    enD=true;
            }
        cout<<"Minimum exchange operations : "<<c<<endl;
    }
    return 0;
}
