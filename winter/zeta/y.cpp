#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
    int n; scanf("%d", &n);

    while (n--)
    {
        char buf[100]; scanf("%s", buf);

        int r, c;
        if (buf[0] == 'R' && sscanf(buf, "R%dC%d", &r, &c) == 2)
        {
            stack<char> build;
            while (c) {
                build.push(char('A' + (c - 1) % 26));
                c -= (c - 1) % 26, c /= 26;
            }

            while (!build.empty()) {
                printf("%c", build.top());
                build.pop();
            }
            printf("%d\n", r);
        }
        else
        {
            char c[100];
            sscanf(buf, "%[A-Z]%d", c, &r);

            printf("R%d", r);
            for (int i = strlen(c) - 1, ans = 0, base = 1; i >= 0; --i)
            {
                ans += (c[i] - 'A' + 1) * base;
                base *= 26;
                if (i == 0) {
                    printf("C%d\n", ans);
                }
            }
        }
    }
}
