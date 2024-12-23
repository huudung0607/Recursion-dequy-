#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int C(int k, int n)
{
	if (k == 0 || k == n)
	{
		return 1;
	}
	return C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
	int n, k;
	cin >> n >> k;
	cout << C(k, n);
}
