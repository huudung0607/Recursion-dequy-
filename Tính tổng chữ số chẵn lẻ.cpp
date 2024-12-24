#include <iostream>
#include <cmath>
using namespace std;
long long tongchan(long long n)
{
	if (n == 0)
	{
		return 0;
	}
	int r = n % 10;
	if (r % 2 == 0)
	{
		return r + tongchan(n / 10);
	}
	return tongchan(n / 10);
}
long long tongle(long long n)
{
	if (n == 0)
	{
		return 0;
	}
	int r = n % 10;
	if (r % 2 != 0)
	{
		return r + tongle(n / 10);
	}
	return tongle(n / 10);
}
int main()
{
	long long n;
	cin >> n;
	cout << tongchan(n) << endl;
	cout << tongle(n);
}
