#include <iostream>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int s[55];
    for (int i = 0; i < n; ++i) cin >> s[i];

    int tot = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] <= 0 || s[i] < s[k - 1]) break;
        ++tot;
    }
    cout << tot << endl;
}
