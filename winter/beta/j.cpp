#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s; cin >> s;
    while (s.find("WUB") == 0) s = s.substr(3);
    for (int p; p = s.find("WUB"), p != -1; )
    {
        if (s[p - 1] == ' ') s.erase(p, 3);
        else s.replace(p, 3, " ");
    }
    cout << s << endl;
}
