#include <iostream>
using namespace std;

int main()
{
    char words[120], mth[] = "hello";
    scanf("%s", words);
    int i, x = 0;
    for (i = 0; words[i]; ++i)
        if (words[i] == mth[x]) ++x;
    cout << (x == 5 ? "YES" : "NO") << endl;
}
