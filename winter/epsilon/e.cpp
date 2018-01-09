#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int mx = -1, tot = 0;
    for (int i = 0; i < n; ++i)
    {
        int cur; cin >> cur;
        mx = max(mx, cur);
        tot += cur;
    }

    cout << mx * n - tot << endl; 
}
