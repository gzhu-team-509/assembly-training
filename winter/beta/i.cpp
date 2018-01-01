#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll ans; cin >> ans;
    bool sign = ans % 2;
    cout << (sign ? "-" : "") << (ans + 1) / 2 << endl;
}
