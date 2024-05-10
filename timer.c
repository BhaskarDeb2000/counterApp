#include <stdio.h>
#include <unistd.h>

int main()
{
    int x;
    printf("Enter your time: ");
    scanf("%d", &x);
    while (x > 0)
    {
        printf("%d seconds remaining\n", x);
        sleep(1);
        x--;
    }
    printf("Time's up!⌛\n");
    return 0;
}