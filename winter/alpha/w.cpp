#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
    ll k, n, w; cin >> k >> n >> w;
    ll tot = (k + w * k) * w / 2;
    cout << max(0LL, tot - n) << endl;
}
