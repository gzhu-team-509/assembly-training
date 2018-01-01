#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int ans = 0;
    while (n--)
    {
        int a, b; cin >> a >> b;
        if (a + 2 <= b) ++ans;
    }
    cout << ans << endl;
}
