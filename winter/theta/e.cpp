#include <iostream>
#include <algorithm>
using namespace std;

// cnt[i] 表示n的因数分解中i!的数量
// sig[i] 表示n的因数分解中i的数量
int cnt[10], sig[10];

void decompose(int);

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    for (char c : s)
        decompose(c - '0');

    while (sig[2]--) ++cnt[2];
    while (sig[3]--) --cnt[2], ++cnt[3];

    for (int i = 9; i >= 2; --i)
        while (cnt[i]--)
            cout << i;
    cout << endl;
}

void decompose(int n)
{
    switch(n)
    {
        case 0: case 1: break;
        case 2: cnt[2] += 1; break;
        case 3: cnt[3] += 1; break;
        case 4: cnt[3] += 1, sig[2] += 2; break;
        case 5: cnt[5] += 1; break;
        case 6: cnt[5] += 1, sig[2] += 1, sig[3] += 1; break;
        case 7: cnt[7] += 1; break;
        case 8: cnt[7] += 1, sig[2] += 3; break;
        case 9: cnt[7] += 1, sig[2] += 3; sig[3] += 2; break;
    }
}
