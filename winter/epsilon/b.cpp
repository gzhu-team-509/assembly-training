#include <iostream>
#include <algorithm>
using namespace std;

// 构造解法 - LeaderBoard
// https://vjudge.net/solution/5440093
// “往杯子里面装水”

// 贪心解法 - Tutorial
// http://codeforces.com/blog/entry/14741

int main()
{
    int m, s; cin >> m >> s;

    if (m == 0 || s == 0 && m > 1 || s > m * 9) cout << "-1 -1" << endl;
    else
    {
        for (int i = m, j = s; i; i--)
        {
            int k = max(0, j - 9 * (i - 1));
            if (i == m && k == 0 && j) k = 1;
            cout << k, j -= k;
        }
        cout << " ";
        for (int i = m, j = s; i; i--)
        {
            int k = min(9, j);
            cout << k, j -= k;
        }
        cout << endl;
    }
}
