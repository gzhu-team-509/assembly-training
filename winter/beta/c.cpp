#include <iostream>
using namespace std;

int main()
{
    int ans; cin >> ans;
    while (++ans)
    {
        int a = ans / 1000;
        int b = ans / 100 % 10;
        int c = ans / 10 % 10;
        int d = ans % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << ans << endl;
            break;
        }
    }
}
