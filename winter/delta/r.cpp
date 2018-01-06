#include <iostream>
#include <stack>
using namespace std;

stack<int> seq;

int main()
{
    int n; cin >> n;

    while (n--)
    {
        char t; cin >> t;
        int cur = t - '0';

        if (!seq.empty())
        {
            int prev = seq.top();
            if (prev ^ cur)
                seq.pop();
            else 
                seq.push(cur);
        }
        else seq.push(cur);
    }
    cout << seq.size() << endl;
}
