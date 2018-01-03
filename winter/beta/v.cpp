#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> home, guest;
    while (n--)
    {
        int a, b; cin >> a >> b;
        home.push_back(a);
        guest.push_back(b);
    }

    int ans = 0;
    for (auto a : home)
    {
        for (auto b : guest)
        {
            if (a == b) ++ans;
        }
    }
    cout << ans << endl;
}
