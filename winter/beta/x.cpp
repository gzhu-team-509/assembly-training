#include <iostream>
using namespace std;

int portal[50000];

int main()
{
    int n, dst; cin >> n >> dst;

    for (int i = 1; i <= n - 1; ++i)
    {
        cin >> portal[i];
    }

    int pos = 1;
    while (pos < dst)
    {
        pos += portal[pos];
    }

    cout << (pos == dst ? "YES" : "NO") << endl;
}
