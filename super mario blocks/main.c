#include<stdio.h>

int main() {

    int n;
    printf("\n Enter Number of Columns: ");
    scanf_s("%d", &n);

    int cl = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int s = cl + 10; s != 0; s--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("     ");
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
        cl--;
    }

}