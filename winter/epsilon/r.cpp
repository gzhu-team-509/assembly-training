#include <iostream>
#include <map>
using namespace std;

int candidate[110];

int main()
{
    int n, m; cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int city[110];
        for (int j = 1; j <= n; ++j)
            cin >> city[j];

        int winner = 1;
        for (int j = 1; j <= n; ++j)
            if (city[winner] < city[j]) winner = j;

        ++candidate[winner];
    }

    int winner = 1;
    for (int i = 1; i <= n; ++i)
        if (candidate[winner] < candidate[i]) winner = i;

    cout << winner << endl;
}
