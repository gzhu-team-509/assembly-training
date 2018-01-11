#include <iostream>
using namespace std;

template <typename T>
T mn(T a, T b)
{
    return min(a, b);
}

template <typename T, typename... Ts>
T mn(T a, Ts... b)
{
    T c = mn(b...);
    return mn(a, c);
}

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int tot_drink = k * l, tot_slice = c * d, tot_salt = p;
    cout << mn(tot_drink / nl, tot_slice, tot_salt / np) / n << endl;
}
