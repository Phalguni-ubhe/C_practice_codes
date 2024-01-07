#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int largest_num = a;

    if(b>largest_num)
    {
        largest_num = b;
    }
    if(c>largest_num)
    {
        largest_num = c;
    }
    if(d>largest_num)
    {
        largest_num = d;
    }

    return largest_num;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
