#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    int n; cin >> n;

    ll mx = 0, cur = 0;
    ll now, prev = 0;
    while (n--)
    {
        cin >> now;
        if (now >= prev) cur++;
        else cur = 1;
        mx = max(mx, cur);
        prev = now;
    }
    cout << mx << endl;
}
