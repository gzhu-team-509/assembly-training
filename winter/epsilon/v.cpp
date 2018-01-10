#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;

    long long tot_even = 0, cnt_odd = 0, tot_odd = 0, min_odd = 1e12;
    while (n--)
    {
        long long cur; cin >> cur;
        if (cur % 2)
        {
            ++cnt_odd;
            min_odd = min(min_odd, cur);
            tot_odd += cur;
        }
        else tot_even += cur;
    }

    cout << (cnt_odd % 2 ? tot_odd - min_odd : tot_odd) + tot_even << endl;
}
