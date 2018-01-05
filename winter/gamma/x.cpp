#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;

    int tot = 0;
    string a, b; cin >> a >> b;
    for (int i = 0; i < a.length(); ++i)
    {
        tot += min(abs(a[i] - b[i]), 10 - abs(a[i] - b[i]));
    }
    cout << tot << endl;
}
