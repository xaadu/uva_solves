/* UVA --> 10340 */

#include <iostream>

using namespace std;

int main()
{
	bool x;
	string s, t;
	while (cin >> s >> t)
	{
		x = true;
		for (int i = 0; i < s.length(); i++)
		{
			for (int j = 0; j < t.length(); j++)
			{
				if (s[i] == t[j])
				{
					x = true;
					t[j] = 0;
					break;
				}
				else
				{
					x = false;
					t[j] = 0;
				}
			}
			if (x == false)
				break;
		}
		(x == true) ? cout << "Yes" << endl : cout << "No" << endl;
	}
	return 0;
}
