#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a, b; cin >> n >> m >> a >> b;

    int major = n / m;
    int rest = n % m;

    int part = min(major * b, major * m * a);
    int sum1 = part + rest * a;
    int sum2 = part + b;
    cout << min(sum1, sum2) << endl;
}
