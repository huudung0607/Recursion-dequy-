#include <iostream>
#include <cmath>
using namespace std;

int maxnum(long long n)
{
	if (n < 10)
	{
		return n;
	}
	int temp = maxnum(n / 10);
	return (n % 10 > temp) ? (n % 10) : temp;
}
int minnum(long long n)
{
	if (n < 10)
	{
		return n;
	}
	int temp = minnum(n / 10);
	return (n % 10 < temp) ? (n % 10) : temp;
}
int main()
{
	long long n;
	cin >> n;
	cout << maxnum(n) << " " << minnum(n);
}
