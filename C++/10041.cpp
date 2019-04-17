/* UVA --> 10041 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i, t, r, res, temp;
    cin >> t;
    while(t--)
    {
        res=0;
        cin >> r;
        int ra[r];
        for(i=0; i<r; i++)
            cin >> ra[i];
        for(i=1; i<=r; i++)
            for(int j=0; j<r-i; j++)
                if(ra[j]>ra[j+1])
                {
                    temp=ra[j];
                    ra[j]=ra[j+1];
                    ra[j+1]=temp;
                }
        int mid = r/2;
        for(i=0; i<r; i++)
            res+=abs(ra[mid]-ra[i]);
        cout << res << endl;
    }
    return 0;
}
