#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;

    bool magic = true;
    for (int i = 0; i < s.size(); ++i)
    {
        switch (s[i])
        {
            case '1':
                if (i + 1 < s.size() && s[i + 1] == '4') ++i;
                if (i + 1 < s.size() && s[i + 1] == '4') ++i;
                break;
            default:
                magic = false;
                break;
        }
    }

    cout << (magic ? "YES" : "NO") << endl;
}
