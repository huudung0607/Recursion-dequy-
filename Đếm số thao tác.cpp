#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int F(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int res = F(n - 1) + 1;
    if (n % 2 == 0)
    {
        res = min(F(n / 2) + 1, res);
    }
    if (n % 3 == 0)
    {
        res = min(F(n / 3) + 1, res);
    }
    return res;
}

int main() {
    int n;
    cin >> n; 
    cout << F(n);
}
