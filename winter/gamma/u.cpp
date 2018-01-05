#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    double tot = 0;
    for (int i = 0; i < n; ++i)
    {
        int t; cin >> t;
        tot += t;
    }

    cout << tot / n << endl;
}
