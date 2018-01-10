#include <iostream>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;

    int ans = 0;
    while (a <= b)
    {
        ++ans;
        b *= 2, a *= 3;
    }
    cout << ans << endl;
}
