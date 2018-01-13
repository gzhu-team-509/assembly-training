#include <iostream>
using namespace std;
using LL = long long;

int main()
{
    LL t, s, x; cin >> t >> s >> x;

    bool barks;
    if (x < t || x == t + 1)
        barks = false;
    else if ((x - t) % s == 0 || (x - 1 - t) % s == 0)
        barks = true;
    else barks = false;

    cout << (barks ? "YES" : "NO") << endl;
}
