#include <cstdio>
#include <cmath>
using namespace std;
using ll = long long;

bool judge(ll n)
{
    if (n == 1 || n == 2) return false;
    if (n == 4) return true;

    ll root = floor(sqrt(n) + 0.5);
    if (root * root == n)
    {
        ll range = floor(sqrt(root) + 0.5);
        ll i = 2;
        while (root % i != 0 && i <= range) i++;
        if (i == range + 1) return true;
        else return false;
    }
    else return false;
}

int main()
{
    int n; scanf("%d", &n);
    while (n--)
    {
        ll t; scanf("%lld", &t);
        printf(judge(t) ? "YES\n" : "NO\n");
    }
}
