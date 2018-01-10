#include <iostream>
#include <vector>
using namespace std;

vector<string> one, two;

int main()
{
    int n, m; cin >> n >> m;

    while (m--)
    {
        string a, b; cin >> a >> b;
        one.push_back(a), two.push_back(b);
    }

    while (n--)
    {
        string c; cin >> c;
        for (int i = 0; i < one.size(); ++i)
        {
            if (one[i] == c || two[i] == c)
            {
                cout << (one[i].size() <= two[i].size() ? one[i] : two[i]) << ' ';
                break;
            }
        }
    }
    cout << endl;
}
