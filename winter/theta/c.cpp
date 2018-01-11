/* Infinite Sequence */
#include <iostream>
using namespace std;
using LL = long long;

int main()
{
    LL a, b, c; cin >> a >> b >> c;
    LL diff = b - a;

    if (diff && c)
        cout << (diff % c == 0 && diff * c > 0 ? "YES" : "NO") << endl;
    else if (diff)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
