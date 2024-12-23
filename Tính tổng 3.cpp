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
		return 1;
	}
	return n * n * n + s(n - 1);
}

int main()
{
	int n;
	cin >> n;
	cout << s(n) << endl;
}
