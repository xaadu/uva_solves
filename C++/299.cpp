/* UVA --> 299 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n, temp, c;
    cin >> t;
    while(t-->0)
    {
        c=0;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin  >> ar[i];
        for(int i=0; i<n-1; i++)
            for(int j=0; j<n-i-1; j++)
                if(ar[j]>ar[j+1])
                {
                    temp = ar[j];
                    ar[j] = ar[j+1];
                    ar[j+1] = temp;
                    c++;
                }
        cout << "Optimal train swapping takes " << c << " swaps." << endl;
    }
    return 0;
}
