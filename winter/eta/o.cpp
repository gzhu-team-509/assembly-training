#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct resturant
{
    int f, t;
} cur;

vector<resturant> list;

int main()
{
    int n, k; cin >> n >> k;
    while (n--)
    {
        cin >> cur.f >> cur.t;
        list.push_back(cur);
    }

    int mx = (list[0].t > k) ? list[0].f - (list[0].t - k) : list[0].f;
    for (int i = 1; i < list.size(); ++i)
    {
        mx = max(mx, (list[i].t > k) ? list[i].f - (list[i].t - k) : list[i].f);
    }
    cout << mx << endl;
}
