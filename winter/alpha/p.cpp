#include <cstdio>
#include <cctype>

int main()
{
    char buf[1010]; scanf("%s", buf);
    buf[0] = toupper(buf[0]);
    printf("%s\n", buf);
}
