#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>
using namespace std;
const int mod = 1e9 + 7;

bool check(int a[], int i, int n)
{
	if (i == n)
	{
		return true;
	}
	else if (a[i - 1] >= a[i])
	{
		return false;
	}
	else
	{
		return check(a, i + 1, n);
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
	if (check(a,0,n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
