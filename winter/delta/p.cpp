#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;

    // 统计x的二进制表示中‘1’的数量
    int ans = 0;
    do
    {
        if (x & 1) ++ans;
    } while (x >>= 1);
    cout << ans << endl;
}
