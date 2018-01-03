#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    ll n, m; cin >> n >> m;

    vector<ll> task;
    while (m--)
    {
        ll t; cin >> t;
        task.push_back(t);
    }

    ll pos = 1, rnd = 0;
    for (int a : task)
    {
        if (a < pos) {
            ++rnd;
        }
        pos = a;
    }

    cout << rnd * n + pos - 1 << endl;
}
