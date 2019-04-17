/* UVA --> 10696 */
#include <bits/stdc++.h>
using namespace std;

long long int f91(long long int x){
    if(x<101) return f91(f91(x+11));
    else return x-10;
}

int main(){
    long long int n;
    for(cin >> n; n!=0; cin >>n)
        cout << "f91(" << n << ") = " << f91(n) << endl;
    return 0;
}
