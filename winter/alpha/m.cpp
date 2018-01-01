#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    int cur, mn; cur = mn = 0;
    while (n--)
    {
        int in, out; cin >> in >> out;
        cur = cur - in + out;
        mn = max(cur, mn);
    }
    cout << mn << endl;
}
