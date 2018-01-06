#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int tot = 0, price = 999;
    while (n--)
    {
        int need, cur; cin >> need >> cur;
        price = min(cur, price);
        tot += price * need;
    }
    cout << tot << endl;
}
