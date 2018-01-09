#include <iostream>
using namespace std;

int city[200100];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> city[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (i == 0) cout << city[i + 1] - city[i];
        else if (i == n - 1) cout << city[i] - city[i - 1];
        else cout << min(city[i + 1] - city[i], city[i] - city[i - 1]);
        cout << " ";
        cout << max(city[i] - city[0], city[n - 1] - city[i]);
        cout << endl;
    }
}
