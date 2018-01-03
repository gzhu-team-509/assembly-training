#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> color;

    int tmp;
    while (cin >> tmp) color.insert(tmp);

    cout << 4 - color.size() << endl;
}
