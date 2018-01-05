#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int rst = 0, ans = 0;
    while (n--)
    {
        int t; cin >> t;
        rst += t;
        if (rst < 0)
        {
            ans += abs(rst), rst = 0;
        }
    }
    cout << ans << endl;
}
