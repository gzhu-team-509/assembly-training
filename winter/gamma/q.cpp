#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t; cin >> n >> t;

    if (n == 1 && t == 10) cout << -1;
    else
    {
        if (t == 10) t = 1;
        cout << t;
        while(--n) cout << 0;
    }
    cout << endl;
}
