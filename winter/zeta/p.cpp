#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    int ans = 0;
    while (n != m)
    {
        if (n > m)
            ans += n - m, m = n;
        else
            if (m % 2)
                m += 1, m /= 2, ans += 2;
            else
                m /= 2, ans += 1;
    }
    cout << ans << endl;
}
