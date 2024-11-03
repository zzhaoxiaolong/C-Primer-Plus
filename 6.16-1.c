#include <stdio.h>
int main()
{
    char arr[26];
    char x=97;
    for(int i=0;i<26;i++)
    {
        arr[i]=x;
        x++;
    }
    for(int i=0;i<26;i++)
        printf("%c ",arr[i]);
    return 0;
}