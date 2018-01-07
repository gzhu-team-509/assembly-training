#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    while (n--)
    {
        int t; cin >> t;
        cout << (360 % (180 - t) ? "NO" : "YES") << endl;
    }
}
