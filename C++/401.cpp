/* UVA --> 10107 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[100000], i, j, x;
    bool done = false;
    for (i = 0; cin >> x; i++, done = false)
    {
        for (j = 0; j < i; j++)
            if (x < ar[j])
            {
                done = true;
                for (int k = i - 1; k >= j; k--)
                    ar[k + 1] = ar[k];
                ar[j] = x;
                break;
            }
        if (!done)
            ar[i] = x;
        if (i % 2 == 0)
            cout << ar[i/2] << endl;
        else
            cout << (ar[i/2]+ar[i/2+1])/2 << endl;
    }
    return 0;
}
