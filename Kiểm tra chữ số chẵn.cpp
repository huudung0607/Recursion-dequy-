#include <iostream>
#include <cmath>
using namespace std;

bool fullchan(long long n)
{
	int r = n % 10;
	if (n == 0)
	{
		return true;
	}
	if (r % 2 != 0)
	{
		return false;
	}
	return fullchan(n / 10);
}

int main()
{
	long long n;
	cin >> n;
	if (fullchan(n))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}
