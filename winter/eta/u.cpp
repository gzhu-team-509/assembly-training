#include <iostream>
#include <queue>
using namespace std;

struct child
{
    int idx, wanted, acquired;
};

queue<child> que;

void init(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        int w; cin >> w;
        child cur = {i, w, 0};
        que.push(cur);
    }
}

int main()
{
    int n, m; cin >> n >> m;
    init(n);

    while (que.size() != 1)
    {
        child cur = que.front();
        que.pop();

        cur.acquired += m;
        if (cur.acquired < cur.wanted)
            que.push(cur);
    }

    cout << que.front().idx << endl;
}
