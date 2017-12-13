/* Infinite Sequence */
#include <iostream>
using namespace std;

int main()
{
    long long a, b, c; cin >> a >> b >> c;

    // 取模注意0和负数的情况
    //! if ((b - a) % c == 0) cout << "YES" << endl;
    // 注意数据类型

    if (b == a) 
    {
        cout << "YES" << endl;
        return 0;
    }
    else if (c == 0) 
    {
        cout << "NO" << endl;
        return 0;
    }

    if (!((b - a) * c > 0)) cout << "NO" << endl;
    else if ((b - a) % c == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
