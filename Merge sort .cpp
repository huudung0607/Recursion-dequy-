#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <climits>
using namespace std;
void merge(vector<int> &a, int l, int m, int r)
{
	int x1 = m - l + 1;
	int y1 = r - m;
	vector<int> x(x1);
	vector<int> y(y1);
	for (int j = l; j <= m; j++)
	{
		x[j - l] = a[j];
	}
	for (int j = m + 1; j <= r; j++)
	{
		y[j - (m + 1)] = a[j];
	}
	int i = 0, j = 0, cnt = l;
	while (i < x1 && j < y1)
	{
		if (x[i] <= y[j])
		{
			a[cnt++] = x[i++];
		}
		else if (x[i] >= y[j])
		{
			a[cnt++] = y[j++];
		}
	}
	while (i < x1)
	{
		a[cnt++] = x[i++];
	}
	while (j < y1)
	{
		a[cnt++] = y[j++];
	}
}
void mergeSort(vector<int> &a, int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	mergeSort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
