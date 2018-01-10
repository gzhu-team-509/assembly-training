#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll a, b, s; cin >> a >> b >> s;

    ll tot = abs(a) + abs(b);
    if (s < tot) cout << "No" << endl;
    else if ((tot - s) % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
