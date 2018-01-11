#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    int sum = 0;
    while (n--)
    {
        int t; cin >> t;
        sum += t;
    }

    cout << abs(sum) / m + (abs(sum) % m ? 1 : 0) << endl;
}
