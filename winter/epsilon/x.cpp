#include <iostream>
#include <map>
using namespace std;

map<string, int> faces;

void init()
{
    faces["Tetrahedron"] = 4;
    faces["Cube"] = 6;
    faces["Octahedron"] = 8;
    faces["Dodecahedron"] = 12;
    faces["Icosahedron"] = 20;
}

int main()
{
    init();
    int n; cin >> n;

    int ans = 0;
    while (n--)
    {
        string collection; cin >> collection;
        ans += faces[collection];
    }
    cout << ans << endl;
}
