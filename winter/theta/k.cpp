#include <iostream>
using namespace std;

int tot[110];

int main()
{
    int n, d; cin >> n >> d;

    for (int i = 0; i < d; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            char c; cin >> c;
            tot[i] += c - '0';
        }
    }

    int mx = 1, cnt = 0;
    for (int i = 0; i < d; ++i)
    {
        if (tot[i] < n)
            ++cnt;
        else
            cnt = 0;
        mx = max(mx, cnt);
    }
    cout << mx << endl;
}
