#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, coins[110], tot = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> coins[i], tot += coins[i];

    sort(coins, coins + n);
    int my = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        my += coins[i];
        if (my > tot - my)
        {
            cout << n - i << endl;
            break;
        }
    }
}
