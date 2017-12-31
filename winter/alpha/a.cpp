#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll n, m, a; cin >> n >> m >> a;
    ll r = n / a + (n % a ? 1 : 0);
    ll h = m / a + (m % a ? 1 : 0);
    cout << r * h << endl;
}
