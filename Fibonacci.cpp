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

long long s(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	return s(n - 1) + s(n - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << s(n) << endl;
}
