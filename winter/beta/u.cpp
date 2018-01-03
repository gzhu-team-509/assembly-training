#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int ans = 0, prev = 0;
    while (n--)
    {
        int cur; cin >> cur;
        if (cur != prev) ++ans;
        prev = cur;
    }
    cout << ans << endl;
}
