#include <iostream>
using namespace std;
using ll = long long;

ll fc[21];
ll de[21];

void init()
{
    de[0] = 0, de[1] = 0, de[2] = 1;
    fc[0] = 1, fc[1] = 1, fc[2] = 2;
    for (int i = 3; i < 21; ++i)
    {
        de[i] = (i - 1) * (de[i - 1] + de[i - 2]);
        fc[i] = i * fc[i - 1];
    }
}

ll pmt(int m, int n)
{
    return fc[m] / fc[m - n] / fc[n];
}

int main()
{
    init();

    int c; cin >> c;
    while (c--)
    {
        int n, m; cin >> n >> m;
        cout << pmt(n, m) * de[m] << endl;
    }
}
