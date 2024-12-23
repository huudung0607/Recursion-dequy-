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

void nhiphan(long long n)
{
	if (n < 2)
	{
		cout << n;
	}
	else
	{
		nhiphan(n / 2);
		cout << n % 2;
	}
}

int main()
{
	long long n;
	cin >> n;
	nhiphan(n);
}
