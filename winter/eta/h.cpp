#include <iostream>
using namespace std;

int main()
{
    string ans; int i = 1;
    while (ans.size() <= 1000)
    {
        ans += to_string(i++);
    }

    int n; cin >> n;
    cout << ans[n - 1];
}
