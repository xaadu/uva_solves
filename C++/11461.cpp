/* UVA -->  */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,t,c,i;
    cin>>x>>y;
    while(x!=0||y!=0){
        if(x>y){t=x;x=y;y=t;}
        for(i=x,c=0; i<=y;i++){
                double z=sqrt(i);
            if(i==(((int)z)*((int)z)))
                c++;
        }
        cout<<c<<endl;
        cin>>x>>y;
    }
    return 0;
}
