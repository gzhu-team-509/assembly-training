#include <iostream>
#include <map>
using namespace std;

map<char, int> calory;

int main()
{
    for (char i = '1'; i <= '4'; ++i)
        cin >> calory[i];
    string s; cin >> s;

    int ans = 0;
    for (char c : s)
        ans += calory[c];

    cout << ans << endl;
}
