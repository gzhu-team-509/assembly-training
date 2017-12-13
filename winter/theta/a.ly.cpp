/* Playing with Dice */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b; scanf("%d%d", &a, &b);
    
    int awin = 0, bwin = 0, dice = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(i - a) == abs(i - b)) 
        {
            dice++; continue;
        }
        if (abs(i - a) < abs(i - b)) awin++;
        else bwin++;
    }

    cout << awin << " " << dice << " " << bwin << endl;
}
