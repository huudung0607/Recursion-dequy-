#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>
using namespace std;
const int mod = 1e9 + 7;

int binarySearch(int a[], int l, int r, int x, int res)
{
	if (l > r)
	{
		return res;
	}
	int m = (l + r) / 2;
	if (a[m] > x)
	{
		res = m;
		return binarySearch(a, m + 1, r, x, res);
	}
	else
	{
		return binarySearch(a, l, m - 1, x, res);
	}
}
int a[1000001];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];	
	}
	int x;
	cin >> x;
	cout << binarySearch(a, 0, n - 1, x, n);
}
