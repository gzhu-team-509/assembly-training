#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int cntM = 0, cntC = 0;
    while (n--)
    {
        int m, c; cin >> m >> c;
        if (m > c) ++cntM;
        else if (m < c) ++cntC;
    }
    
    if (cntM > cntC)
        cout << "Mishka" << endl;
    else if (cntM < cntC)
        cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
}
