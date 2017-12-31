#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s; cin >> s;
    string vowels = "aoyeui";
    for (int i = 0; i < s.length(); ++i)
    {
        if (vowels.find((char)tolower(s[i])) != -1) continue;
        cout << '.' << (char)tolower(s[i]);
    }
    cout << endl;
}
