#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> regit;

    int n; cin >> n;
    while (n--)
    {
        string s; cin >> s;
        if (regit[s] != 0)
            cout << s << regit[s]++ << endl;
        else
        {
            cout << "OK" << endl;
            regit[s] = 1;
        }
    }
}
