#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> toy;
    while (n--)
    {
        int t; cin >> t;
        toy.push_back(t);
    }

    sort(toy.begin(), toy.end());
    for (int i : toy)
    {
        cout << i << " ";
    }
    cout << endl;
}
