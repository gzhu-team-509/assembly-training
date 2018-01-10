#include <iostream>
using namespace std;

int main()
{
    const string vowels = "AEIOUY";

    string s; cin >> s;
    s += 'A';

    int mx = 0;
    for (int i = 0, lst = -1; i < s.length(); ++i)
    {
        if (vowels.find(s[i]) != -1) mx = max(i - lst, mx), lst = i;
    }
    cout << mx << endl;
}
