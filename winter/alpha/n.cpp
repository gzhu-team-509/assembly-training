#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int ans = 0;
    for (char cur, prev = ' '; n--; prev = cur)
    {
        cin >> cur;
        if (cur != prev) continue;
        else ++ans;
    }
    cout << ans << endl;
}
