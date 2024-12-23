#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
const int mod = 1e9 + 7;
long long bin_pow(long long a, long long b, int mod)
{
	if (b == 0)
	{
		return 1;
	}
	long long res = bin_pow(a, b/2,mod);
	if (b % 2 == 1)
	{
		return (((res % mod) * (res % mod)) % mod) * (a % mod)%mod;
	}
	return ((res % mod) * (res % mod)) % mod;
}


int main()
{
	long long a, b;
	cin >> a >> b;
	cout << bin_pow(a, b, mod);
}
