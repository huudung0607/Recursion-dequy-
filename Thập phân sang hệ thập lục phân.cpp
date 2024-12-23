#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <iomanip>
using namespace std;
const int mod = 1e9 + 7;

void thapphan(long long n)
{
	if (n < 16)
	{
		if (n < 10)
		{
			cout << n;
		}
		else
		{
			cout << char(55 + n);
		}
	}
	else
	{
		thapphan(n / 16);
		int res = n % 16;
		if (res < 10)
		{
			cout << res;
		}
		else
		{
			cout << char(res + 55);
		}
	}
}

int main()
{
	long long n;
	cin >> n;
	thapphan(n);
}
