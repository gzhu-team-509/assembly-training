#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    int i;
    for (i = 1; n; --n, ++i)
    {
        if (i % m == 0) ++n;
    }
    cout << i - 1 << endl;
}
