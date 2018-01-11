#include <iostream>
#include <algorithm>
using namespace std;

int price[100100];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> price[i];
    sort(price, price + n);

    int m; cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int t; cin >> t;
        int * pos = upper_bound(price, price + n, t);
        cout << pos - price << endl;
    }
}
