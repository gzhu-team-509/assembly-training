#include <iostream>
using namespace std;

int main()
{
    int n, c; cin >> n >> c;

    int ans = 1;
    int prev; cin >> prev;
    while (--n)
    {
        int cur; cin >> cur;
        if (cur - prev > c) ans = 1;
        else ++ans;
        prev = cur;
    }
    cout << ans << endl;
}
