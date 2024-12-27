#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>
using namespace std;
const int mod = 1e9 + 7;

int binaryFirst(vector<int> a, int l, int r, int x, int res)
{
	if (l > r)
	{
		return res;
	}
	int m = (l + r) / 2;
	if (a[m] == x)
	{
		res = m;
		return binaryFirst(a, l, m - 1, x, res);
	}
	else if(a[m] < x)
	{
		return binaryFirst(a, m + 1, r, x, res);
	}
	else
	{
		return binaryFirst(a, l, m - 1, x, res);
	}
}

int binaryLast(vector<int> a, int l, int r, int x, int res)
{
	if (l > r) return res;
	int m = (l + r) / 2;
	if (a[m] == x)
	{
		res = m;
		return binaryLast(a, m + 1, r, x, res);
	}
	else if (a[m] < x)
	{
		return binaryLast(a, m + 1, r, x, res);
	}
	else
	{
		return binaryLast(a, l , m - 1, x, res);
	}
}
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];	
	}
	int x; cin >> x;
	int first = binaryFirst(a, 0, n - 1, x, -1);
	int last = binaryLast(a, 0, n - 1, x, -1);
	if (first == -1 || last == -1)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << last - first + 1 << endl;
	}
}
