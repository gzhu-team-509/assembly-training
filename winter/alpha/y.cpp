#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    vector<int> lucky = {4, 7, 47, 74, 477, 747, 774, 447, 474, 744};

    ll n; cin >> n;
    int tot = 0;
    do {
        int digit = n % 10;
        if (digit == 4 || digit == 7) ++tot;
    } while (n /= 10);

    bool luck = false;
    for (int m : lucky)
    {
        if (tot == m) luck = true;
    }

    cout << (luck ? "YES" : "NO") << endl;
}
