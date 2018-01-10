#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int cur = -1, lst;
    for (int i = 0; i < n; ++i)
        lst = cur, cin >> cur;

    if (n == 1)
        if (cur == 15 || cur == 0)
            cout << (cur == 15 ? "DOWN" : "UP") << endl;
        else
            cout << "-1" << endl;
    else if (cur - lst > 0)
        cout << (cur == 15 ? "DOWN" : "UP") << endl;
    else
        cout << (cur == 0 ? "UP" : "DOWN") << endl;
}
