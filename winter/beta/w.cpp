#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int a, b, n; cin >> a >> b >> n;

    int token;
    while (true)
    {
        token = gcd(a, n);
        if (n < token)
        {
            cout << 1; break;
        }
        n -= token;
        token = gcd(b, n);
        if (n < token)
        {
            cout << 0; break;
        }
        n -= token;
    }
}
