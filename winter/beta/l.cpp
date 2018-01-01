// WA
#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int ans = n / 2;
    if (ans % 2) cout << ans - 1 << " " << ans + 1 << endl;
    else cout << ans << " " << ans << endl;
}
