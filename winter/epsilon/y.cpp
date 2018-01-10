#include <iostream>
#include <algorithm>
using namespace std;

struct student
{
    int idx, rating;
    int pos;
} students[2020];

int main()
{
    int n; cin >> n;

    students[0] = {
        0, 9999, 0
    };
    for (int i = 1; i <= n; ++i)
    {
        students[i].idx = i;
        cin >> students[i].rating;
    }

    auto byRating = [](student a, student b) {
        return a.rating > b.rating;
    };
    sort(students, students + n + 1, byRating);

    for (int i = 1; i <= n; ++i)
    {
        if (students[i].rating != students[i - 1].rating)
            students[i].pos = i;
        else
            students[i].pos = students[i - 1].pos;
    }

    auto byIdx = [](student a, student b) {
        return a.idx < b.idx;
    };
    sort(students, students + n + 1, byIdx);

    for (int i = 1; i <= n; ++i)
    {
        cout << students[i].pos << ' ';
    }
    cout << endl;
}
