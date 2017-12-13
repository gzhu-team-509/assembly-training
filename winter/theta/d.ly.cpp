#include <iostream>
using namespace std;

int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);
    int n; cin >> n;

    int diamod = 1, star = (n - diamod) / 2;
    int diff = 1, cur;
    for (int i = 1; i <= n; i++)
    {
        cur = star; while (cur--) cout << "*";
        cur = diamod; while (cur--) cout << "D";
        cur = star; while (cur--) cout << "*";
        cout << endl;
        if (star - diff < 0) diff = -1;
        star -= diff; diamod += diff * 2;
    }
}
