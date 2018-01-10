#include <iostream>
#include <algorithm>
using namespace std;

struct card
{
    int val, idx;
} cards[120];

int main()
{
    int n; cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> cards[i].val, cards[i].idx = i + 1;
    }

    auto cmp = [](card a, card b) {
        return a.val < b.val;
    };
    sort(cards, cards + n, cmp);

    for (int i = 0; i < n / 2; ++i)
    {
        cout << cards[i].idx << ' ' << cards[n - 1 - i].idx << endl;
    }
}
