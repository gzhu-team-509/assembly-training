#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int n; cin >> n;

    double mn = 1e9;
    while (n--)
    {
        int x, y, v; cin >> x >> y >> v;

        auto squ = [](int x) {
            return x * x;
        };
        double dis = sqrt(squ(x - a) + squ(y - b));
        mn = min(mn, dis / v);
    }

    cout.flags(cout.fixed); cout.precision(8);
    cout << mn << endl;
}
