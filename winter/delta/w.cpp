#include <iostream>
using namespace std;
using ll = long long;

// 错排问题
// https://zh.wikipedia.org/wiki/%E9%94%99%E6%8E%92%E9%97%AE%E9%A2%98

ll de[21];
ll fc[21];

void init()
{
    de[1] = 0, de[2] = 1;
    for (int i = 3; i < 21; ++i)
        de[i] = (i - 1) * (de[i - 2] + de[i - 1]);

    fc[1] = 1, fc[2] = 2;
    for (int i = 3; i < 21; ++i)
        fc[i] = fc[i - 1] * i;
}

int main()
{
    cout.flags(cout.fixed);
    cout.precision(2);

    init();

    int n; cin >> n;
    while (n--)
    {
        int t; cin >> t;
        cout << (double)de[t] / fc[t] * 100 << '%' << endl;
    }
}
