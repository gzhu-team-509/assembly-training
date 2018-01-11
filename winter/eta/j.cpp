#include <iostream>
#include <vector>
using namespace std;

vector<int> bids;

int strip(int n)
{
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    return n;
}

int main()
{
    int n; cin >> n;

    while (n--)
    {
        int t; cin >> t;
        bids.push_back(strip(t));
    }

    bool able = true;
    for (int i = 1; i < bids.size(); ++i)
    {
        if (bids[i] != bids[0]) able = false;
    }

    cout << (able ? "Yes" : "No") << endl;
}
