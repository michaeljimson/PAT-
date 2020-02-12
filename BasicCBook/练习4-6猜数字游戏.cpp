#include <stdio.h>

int main()
{
	int rand_number, n;
	scanf("%d %d", &rand_number, &n);
	int i;
	int m;
	int flag = 0;
 	for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        if (m < 0)
            break;
        if (m > rand_number)
            printf("Too big\n");
        if (m < rand_number)
            printf("Too small\n");
        if (m == rand_number)
        {
            if (i == 1)
            {
                flag = 1;
                printf("Bingo!\n");
                break;
            }
            if (i == 2 || i == 3)
            {
                flag = 1;
                printf("Lucky You!\n");
                break;
            }
            if (i > 3)
            {
                flag = 1;
                printf("Good Guess!\n");
                break;
            }
        }
	}
	if(flag == 0)
		printf("Game Over\n");
	return 0;
}
