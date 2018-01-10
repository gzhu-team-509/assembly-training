#include <iostream>
using namespace std;

const int MAXN = 55;

bool asphalted[MAXN][MAXN];

int main()
{
    int n; cin >> n;

    for (int i = 1; i <= n * n; ++i)
    {
        int x, y; cin >> x >> y;

        if (!asphalted[x][y])
        {
            cout << i << ' ';
            for (int j = 1; j < MAXN; ++j)
                asphalted[x][j] = true;
            for (int k = 1; k < MAXN; ++k)
                asphalted[k][y] = true;
        }
    }
    cout << endl;
}
