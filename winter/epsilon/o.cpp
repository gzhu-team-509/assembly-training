#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    string ans;
    int cur = 0, cnt = 0;
    for (char c : s)
    {
        if (c == 'B')
            ++cur;
        else
            if (cur) ans += to_string(cur), ans += ' ', ++cnt, cur = 0;
    }
    if (cur) ans += to_string(cur), ++cnt;
    if (!cnt) cout << 0;
    else cout << cnt << endl << ans;
    cout << endl;
}
