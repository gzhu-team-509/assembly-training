#include <iostream>
#include <algorithm>
using namespace std;

int origin[100100];
int sorted[100100];

int main()
{
    int n; cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> origin[i], sorted[i] = origin[i];
    sort(sorted + 1, sorted + n + 1);

    int s = 1, e = 1, tot = 0, cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (origin[i] != sorted[i])
        {
            ++tot, s = i;
            while (origin[s] != sorted[++i]);
            e = i;

            bool ok = true;
            for (int j = 0; s + j <= e; ++j)
                if (origin[s + j] != sorted[e - j]) ok = false;
            if (ok) ++cnt;
        }
    }

//! if (tot == cnt && cnt == 0 || cnt == 1)
    if (tot == cnt && (cnt == 0 || cnt == 1))
        cout << "yes" << endl << s << ' ' << e << endl;
    else
        cout << "no" << endl;
}
