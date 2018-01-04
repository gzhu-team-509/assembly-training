#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n; cin >> n;

    if (n > 0) cout << n << endl;
    else
    {
        int ans1 = n / 10;
        int ans2 = n / 100 * 10 + n % 10;
        cout << (ans1 > ans2 ? ans1 : ans2) << endl;
    }
}
