#include <iostream>
using namespace std;

int main()
{
    int si, sj;
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
        {
            int k; cin >> k;
            if (k == 1) si = i, sj = j;
        }

    int ans = abs(si - 2) + abs(sj - 2);
    cout << ans << endl;
}
