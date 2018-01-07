#include <cstdio>
#include <list>
#include <set>
using namespace std;

int main()
{
    int n, m;
    while (scanf("%d%d", &n, &m) == 2)
    {
        list<set<int>> city;
        for (int i = 1; i <= n; ++i)
        {
            set<int> s; s.insert(i);
            city.push_back(s);
        }

        for (int i = 1; i <= m; ++i)
        {
            int a, b; scanf("%d%d", &a, &b);
            for (set<int> s : city)
            {
                if(s.find(a) != s.end())
                {
                    
                }
            }
        }

        printf("%d\n", city.size());
    }
}
