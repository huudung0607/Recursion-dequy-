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
//Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy
//Gợi ý : Chia ra 2 trường hợp n chẵn và n lẻ
long long s(int n)
{
	if (n == 1)
	{
		return -1;
	}
	if (n % 2 == 0)
	{
		return n + s(n - 1);
	}
	else if (n % 2 != 0)
	{
		return -n + s(n - 1);
	}
}

int main()
{
	int n;
	cin >> n;
	cout << s(n) << endl;
}
