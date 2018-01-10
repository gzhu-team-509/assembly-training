#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;

    for (int i = 0; i < s.length(); ++i)
    {
        if (i != 0)
            cout << (s[i] >= '5' ? char('0' + '9' - s[i]) : s[i]);
        else
            cout << (s[i] != '9' && s[i] >= '5' ? char('0' + '9' - s[i]) : s[i]);
    }
    cout << endl;
}
