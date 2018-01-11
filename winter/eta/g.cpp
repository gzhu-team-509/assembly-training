#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int mx = 1, cur = 0, prev = -1;
    while (n--)
    {
        int now; cin >> now;
        if (now > prev)
            ++cur;
        else
            cur = 1;
        mx = max(mx, cur), prev = now;
    }
    
    cout << mx << endl;
}
