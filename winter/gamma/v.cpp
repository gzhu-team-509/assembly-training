#include <iostream>
using namespace std;

int main()
{
    int n, h; cin >> n >> h;

    int tot = 0;
    while (n--)
    {
        int t; cin >> t;
        t > h ? tot += 2 : tot += 1;
    }
    cout << tot << endl;
}
