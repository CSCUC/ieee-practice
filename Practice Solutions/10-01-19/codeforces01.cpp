// Codeforces solutions
// https://codeforces.com/contest/1234/problem/A
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int q, n;
	vector<int> aVec;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int an; // asub(n)
		cin >> n;

		// Vector resized to N
		aVec.resize(n);
		for (int j = 0; j < n; j++)
		{
			cin >> an;
			aVec[i] += an;
		}
		for (int k = 0; k <= i; k++)
		{
			if(aVec[k] % n != 0) aVec[k] = 1 + ((aVec[k]) / n);
			else
			{
				aVec[k] /= n;
			}
		}
	}
	
	for (int i = 0; i < q; i++)
	{
		cout << aVec[i] << endl;
	}

	system("pause");
	return 0;
}

