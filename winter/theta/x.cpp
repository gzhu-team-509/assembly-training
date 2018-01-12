#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct instrument
{
    int idx, cost;
    bool operator < (const instrument oth) const
    {
        return cost > oth.cost;
    }
} ins;

priority_queue<instrument> que;

int main()
{
    int n, k; cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        ins.idx = i, cin >> ins.cost;
        que.push(ins);
    }

    int tot = 0; string ans;
    while (k > 0 && !que.empty())
    {
        instrument ins = que.top();
        que.pop();
        if (k >= ins.cost)
        {
            k -= ins.cost;
            ++tot, ans += to_string(ins.idx), ans += ' ';
        }
        else break;
    }

    cout << tot << endl;
    if (tot) cout << ans << endl;
}
