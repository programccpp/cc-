#include <stdio.h>
int main()
{
    int mark[5];
    int totalMark = 0;
    float percent;

    printf("Enter a five subjects mark: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &mark[i]);

        if (mark[i] < 0)
        {
            printf("Enter a non-negative number.\n");
            return 1;
        }

        totalMark += mark[i];
    }

    percent = (float)totalMark / 5.0;

    printf("Total Mark is: %d\n", totalMark);
    printf("Percentage is: %.2f%%", percent);
    return 0;
}