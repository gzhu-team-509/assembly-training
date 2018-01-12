#include <iostream>
using namespace std;
using LL = long long;

int main()
{
    LL t, s, x; cin >> t >> s >> x;

    bool nobarks;
    if (x < t || x == t + 1)
        nobarks = true;
    else if ((x - t) % s == 0 || (x - 1 - t) % s == 0)
        nobarks = false;
    else nobarks = true;

    cout << (nobarks ? "YES" : "NO") << endl;
}
