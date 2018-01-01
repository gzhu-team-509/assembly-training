#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s; cin >> s;
    sort(s.begin(), s.end());

    int cnt = 0; char prev = ' ';
    for (char cur : s)
    {
        if (cur != prev) ++cnt;
        prev = cur;
    }

    cout << (cnt % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
}
