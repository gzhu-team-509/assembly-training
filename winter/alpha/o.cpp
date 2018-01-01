#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s; cin >> s;

    int tot = 0; bool first = isupper(s[0]);
    for (int i = 0; i < s.length(); ++i)
    {
        if (isupper(s[i])) tot++;
    }

    if (tot == s.length())
        for (int i = 0; i < s.length(); ++i)
            cout << (char)tolower(s[i]);
    else if (!first && tot == s.length() - 1) {
        cout << (char)toupper(s[0]);
        for (int i = 1; i < s.length(); ++i)
            cout << (char)tolower(s[i]);
    }
    else cout << s;
    cout << endl;
}
