#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int S(long long n)
{
	if (n < 10)
	{
		return 1;
	}
	return 1 + S(n / 10);
}
int main()
{
	long long n;
	cin >> n;
	cout << S(n) << endl;
}
