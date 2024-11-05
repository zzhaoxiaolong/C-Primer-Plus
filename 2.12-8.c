#include<stdio.h>
void one_three(void)
{
    printf("one\n");
    printf("two\n");
    printf("three\n");
    return printf("done!\n");
}
int main()
{
    printf("starting now:\n");
    one_three();
    return 0;
}