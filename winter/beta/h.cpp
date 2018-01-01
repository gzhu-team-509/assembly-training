#include <iostream>
using namespace std;

template<typename T>
T mx(T a, T b)
{
    return max(a, b);
}

template<typename T, typename... Ts>
T mx(T a, Ts... b)
{
    T c = mx(b...);
    return mx(a, c);
}

int main()
{
    int a, b, c; cin >> a >> b >> c;
    cout << mx(
        a + b + c,
        a + b * c,
        (a + b) * c,
        a * b + c,
        a * (b + c),
        a * b * c
    ) << endl;
}
