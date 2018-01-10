#include <iostream>
using namespace std;

int main()
{
    int n, a, b; cin >> n >> a >> b;

    // 从1开始编号，Petr能站立的第一个位置的序号
    int pos = max(n - b, a + 1);
    int ans = n - pos + 1;

    cout << ans << endl;
}
