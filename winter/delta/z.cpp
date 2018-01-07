#include <iostream>
using namespace std;
using ll = long long;

// 卡塔兰数
// https://zh.wikipedia.org/wiki/%E5%8D%A1%E5%A1%94%E5%85%B0%E6%95%B0

ll h[35];

void init()
{
    h[0] = 1, h[1] = 1;
    for (int i = 2; i < 36; ++i)
        for (int j = 0; j <= i - 1; j++)
            h[i] += h[j] * h[i - 1 - j];
}

int main()
{
    init();

    int kase = 0;
    int n; while (cin >> n && n != -1)
    {
        cout << ++kase << ' ' << n << ' ' <<  2 * h[n] << endl;
    }
}
