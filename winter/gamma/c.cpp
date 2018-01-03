#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n; string s; cin >> n >> s;

    set<char> dic;
    for (auto c : s)
    {
        dic.insert((char)tolower(c));
    }
    cout << (dic.size() == 26 ? "YES" : "NO") << endl;
}
