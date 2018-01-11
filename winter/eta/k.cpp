#include <iostream>
#include <queue>
using namespace std;
using LL = long long;

priority_queue<int, vector<int>, greater<int>> que;

int main()
{
    int n; cin >> n;
    while (n--)
    {
        int t; cin >> t;
        que.push(t);
    }

    LL tme = 0, satisfied = 0;
    while (!que.empty())
    {
        int cur = que.top();
        que.pop();

        if (tme <= cur) {
            satisfied++;
            tme += cur;
        }
    }
    cout << satisfied << endl;
}
