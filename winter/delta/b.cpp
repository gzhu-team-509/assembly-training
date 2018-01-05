#include <iostream>
using namespace std;

int table[15][15];

int main()
{
    int n; cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == 1 && j == 1) table[i][j] = 1;
            else table[i][j] = table[i - 1][j] + table[i][j - 1];
        }
    }
    cout << table[n][n] << endl;
}
