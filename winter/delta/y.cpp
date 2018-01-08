#include <cstdio>
#include <vector>
using namespace std;

// 并查集
// https://zh.wikipedia.org/wiki/%E5%B9%B6%E6%9F%A5%E9%9B%86

struct DisjointSet
{
    vector<int> father, rank;

    DisjointSet (int n) : father(n + 1), rank(n + 1)
    {
        for (int i = 1; i <= n; ++i)
            father[i] = i;
    }

    int find(int v)
    {
        return father[v] = (father[v] == v ? v : find(father[v]));
    }

    void merge(int x, int y)
    {
        int a = find(x), b = find(y);
        if (rank[a] < rank[b]) swap(a, b);
        father[b] = a;
        if (rank[b] == rank[a]) ++rank[a];
    }
};

int main()
{
    int n, m;
    while (scanf("%d%d", &n, &m) == 2 && n != 0)
    {
        DisjointSet set(n);
        int ans = n;

        while (m--)
        {
            int a, b; scanf("%d%d", &a, &b);
            if (set.find(a) != set.find(b))
                set.merge(a, b), --ans;
        }
        printf("%d\n", ans - 1);
    }
}
