#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    bool has1 = false;
    while (n--)
    {
        int t; cin >> t;
        if (t == 1) has1 = true;
    }
    cout << (has1 ? "-1" : "1") << endl;
}
