#include <iostream>
using namespace std;

int cnt[4];

int main()
{
    do
    {
        int t; scanf(" %d", &t);
        ++cnt[0], ++cnt[t];
    } while (scanf(" +") != EOF);

    string ans;
    for (int i = 1; i <= 3; ++i)
    {
        while (cnt[i]--)
        {
            ans += (char)(i + '0');
            if (--cnt[0]) ans += "+";
        }
    }
    cout << ans << endl;
}
