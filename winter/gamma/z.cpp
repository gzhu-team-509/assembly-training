#include <iostream>
using namespace std;

int main()
{
    int k, r; cin >> k >> r;

    int ans = 1;
    while ((k * ans) % 10 != 0 && (k * ans - r) % 10 != 0) ++ans;
    cout << ans << endl;
}
