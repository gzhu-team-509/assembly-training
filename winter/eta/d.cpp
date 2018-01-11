#include <iostream>
using namespace std;
using LL = long long;

int main()
{
    int n; cin >> n;

    LL cost = 0, energy = 0, prev = 0;
    while (n--)
    {
        LL cur; cin >> cur;
        energy += prev - cur;
        if (energy < 0) cost += abs(energy), energy = 0;
        prev = cur;
    }
    cout << cost << endl;
}
