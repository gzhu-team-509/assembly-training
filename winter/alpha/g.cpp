#include <iostream>
using namespace std;

int main()
{
    int n, tot = 0; cin >> n;
    while (n--)
    {
        int a, b, c; cin >> a >> b >> c;
        int cnt = a + b + c;
        if (cnt >= 2) ++tot;
    }
    cout << tot << endl;
}
