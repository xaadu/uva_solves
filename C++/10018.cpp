#include <bits/stdc++.h>
using namespace std;

long long int rev(long long int x){
    long long int r=0;
    while(x!=0){
        r = (r*10)+(x%10);
        x/=10;
    }
    return r;
}

int main(){
    long long int n1, n2;
    int t, i;
    cin >> t;
    while(t-- > 0){
        i=0;
        cin >> n1;
        n2 = rev(n1);
        do{
            n1 = n1+n2;
            n2 = rev(n1);
            i++;
        }while(n1!=n2);
        cout << i << " " <<n1 << endl;
    }
    return 0;
}
