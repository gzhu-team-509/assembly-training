#include <iostream>
#include <cstring>
using namespace std;

bool row[15];
bool column[15];

int main()
{
    int r, c; cin >> r >> c;

    for (int i = 1; i <= r; ++i)
    {
        for (int j = 1; j <= c; ++j)
        {
            char c; cin >> c;
            if (c == 'S')
                row[i] = true, column[j] = true;
        }
    }

    int tot = 0;
    for (int i = 1; i <= r; ++i)
    {
        for (int j = 1; j <= c; ++j)
        {
            if (row[i] && column[j]) ++tot;
        }
    }
    cout << r * c - tot << endl;
}
