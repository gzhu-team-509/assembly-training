#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3; cin >> a1 >> a2 >> a3;
    int b1, b2, b3; cin >> b1 >> b2 >> b3;
    int n; cin >> n;

    int cups = a1 + a2 + a3;
    int medals = b1 + b2 + b3;
    int required = cups / 5 + (cups % 5 ? 1 : 0) + medals / 10 + (medals % 10 ? 1 : 0);

    cout << (required <= n ? "YES" : "NO") << endl;
}
