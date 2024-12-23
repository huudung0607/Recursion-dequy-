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

double s(int n)
{
	if (n == 1.0)
	{
		return 1.0;
	}
	return 1.0 / n + s(n - 1.0);
}

int main()
{
	int n;
	cin >> n;
	cout << fixed << setprecision(3) << s(n) << endl;
}
