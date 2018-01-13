#include <iostream>
using namespace std;
using LL = long long;

int main()
{
    LL n, x; cin >> n >> x;
    LL d = 0;

    while (n--)
    {
        char sgn; LL diff; cin >> sgn >> diff;

        switch (sgn)
        {
            case '+':
                x += diff; break;
            case '-':
                x - diff >= 0 ? x -= diff : ++d; break;
        }
    }

    cout << x << ' ' << d << endl;
}
