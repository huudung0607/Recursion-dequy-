#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int doixung(vector<int> a, int l ,int r)
{
    if (l > r)
    {
        return 1;
    }
    else
    {
        if (a[l] != a[r])
        {
            return 0;
        }
        else
        {
            return doixung(a, l + 1, r - 1);
        }
    }

}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (doixung(a,0,n-1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
