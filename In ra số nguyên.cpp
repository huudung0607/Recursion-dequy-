#include <iostream>
#include <cmath>
using namespace std;
int reverse(long long n)
{
	long long sum = 0;
	while (n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}
void right(long long n)
{
	if (n > 0)
	{
		cout << n % 10 << " ";
		right(n / 10);
	}
}
void left(long long n)
{
	if (n > 0)
	{
		left(n / 10);
		cout << n % 10 << " ";
	}
}
int main()
{
	long long n;
	cin >> n;
	left(n);
	cout << endl;
	right(n);
}
