/* UVA --> 1008 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[26];
    char y[26], z[500];
    for (int i = 0; i < 26; i++)
    {
        x[i] = 0;
        y[i] = i + 65;
    }
    int t;
    cin >> t;
    t++;
    while (t--)
    {
        gets(z);
        for (int i = 0; z[i] != '\0'; i++)
            for (int j = 0; j < 26; j++)
                if (toupper(z[i]) == y[j])
                {
                    x[j]++;
                    break;
                }
    }

    for (int i = 1; i < 26; i++)
        for (int j = 0; j < 26 - i; j++)
            if (x[j] < x[j + 1])
            {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
                t = y[j];
                y[j] = y[j + 1];
                y[j + 1] = t;
            }
            else if (x[j] == x[j] + 1 && y[j] > y[j + 1])
            {
                t = y[j];
                y[j] = y[j + 1];
                y[j + 1] = t;
            }
    for (int i = 0; i < 26; i++)
        if (x[i] == 0)
            break;
        else
            cout << y[i] << ' ' << x[i] << endl;
    return 0;
}
