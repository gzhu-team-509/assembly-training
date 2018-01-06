#include <iostream>
#include <cctype>
#include <map>
using namespace std;

map<int, int> weight;

void init()
{
    weight['q'] = 9;
    weight['r'] = 5;
    weight['b'] = 3;
    weight['n'] = 3;
    weight['p'] = 1;
}

int main()
{
    init();

    int black = 0, white = 0;
    char ch; while (cin >> ch)
    {
        bool iswhite = isupper(ch);
        (iswhite ? white : black) += weight[tolower(ch)];
    }

    if (black != white)
        cout << (black > white ? "Black" : "White") << endl;
    else
        cout << "Draw" << endl;
}
