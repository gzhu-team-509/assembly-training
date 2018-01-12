#include <iostream>
#include <algorithm>
using namespace std;

struct exam
{
    int schedule, advance;
    int actual;
} exams[5050];

int main()
{
    int n; cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> exams[i].schedule >> exams[i].advance;

    auto cmp = [](exam a, exam b) {
        if (a.schedule != b.schedule)
            return a.schedule < b.schedule;
        else
            return a.advance < b.advance;
    };
    sort(exams, exams + n, cmp);

    exams[0].actual = min(exams[0].schedule, exams[0].advance);
    for (int i = 1; i < n; ++i)
    {
        if (exams[i].advance >= exams[i - 1].actual)
            exams[i].actual = exams[i].advance;
        else
            exams[i].actual = exams[i].schedule;
    }
    cout << exams[n - 1].actual << endl;
}
