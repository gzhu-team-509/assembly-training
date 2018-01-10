#include <iostream>
using namespace std;

int c50, c25;

int main()
{
    int n; cin >> n;

    bool ok = true;
    while (n--)
    {
        int cur; cin >> cur;
        switch (cur) {
            case 25: ++c25; break;
            case 50: {
                if (c25) --c25, ++c50;
                else ok = false;
                break;
            }
            case 100: {
                if (c50 && c25) --c50, --c25;
                else if (c25 >= 3) c25 -= 3;
                else ok = false;
                break;
            }
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
}
