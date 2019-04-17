/* UVA --> 10783 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, ct=0, i;
    long long int x,y,temp,s;
    cin >> t;
    while(t--!=0){
        cin >> x >> y;
        if(x > y){temp = x;x = y;y=temp;}
        for(s=0,ct++,i=x; i<=y; i++)
            if(i%2!=0)s+=i;

    cout << "Case " << ct << ": " << s << endl;
    }
    return 0;
}
