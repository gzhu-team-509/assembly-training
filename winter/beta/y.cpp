#include <cstdio>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> dic;

    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch)) dic.insert(ch);
    }

    cout << dic.size() << endl;
}
