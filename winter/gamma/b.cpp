#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int cntx = 0, cnty = 0;
    int ansx, ansy;
    for (int i = 1; i <= n; ++i)
    {
        int t; cin >> t;
        if (t % 2) {
            ++cntx, ansx = i;
        }
        else {
            ++cnty, ansy = i;
        }
    }

    cout << (cntx == 1 ? ansx : ansy) << endl;
}
