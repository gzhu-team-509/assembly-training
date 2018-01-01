#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a, b, c; a = b = c = 0;
    while (n--)
    {
        int x, y, z; cin >> x >> y >> z;
        a += x, b += y, c += z;
    }
    cout << (a || b || c ? "NO" : "YES") << endl;
}
