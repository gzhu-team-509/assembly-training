#include <iostream>
using namespace std;

int cnt[10];

int main()
{
    int n, a; cin >> a >> n;
    while (n)
    {
        int c = n % 10;
        while (c) cnt[c--]++;
        n /= 10;
    }

    
}
