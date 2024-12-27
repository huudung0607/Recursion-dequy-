#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>
using namespace std;
const int mod = 1e9 + 7;

bool binarySearch(int a[], int l, int r, int x)
{
	if (l > r)
	{
		return false;
	}
	int m = (l + r) / 2;
	if (a[m] == x)
	{
		return true;
	}
	else if (a[m] > x)
	{
		return binarySearch(a, l, m - 1, x);
	}
	else
	{
		return binarySearch(a, m + 1, r, x);
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
	sort(a, a + n);
	if (binarySearch(a,0,n - 1, x))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}
