#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    int ans = x / 5 + (x % 5 ? 1 : 0);
    cout << ans << endl;
}
