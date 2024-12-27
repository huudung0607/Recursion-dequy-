#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>
using namespace std;
const int mod = 1e9 + 7;

void printLeft(int a[], int i, int n)
{
	if (i == n)
	{
		return;
	}
	else
	{
		cout << a[i] << " ";
		printLeft(a, i + 1, n);
	}
}
void printRight(int a[], int i)
{
	if (i == -1)
	{
		return;
	}
	else
	{
		cout << a[i] << " ";
		printRight(a, i - 1);
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
	printLeft(a, 0, n);
	cout << endl;
	printRight(a, n - 1);
}
