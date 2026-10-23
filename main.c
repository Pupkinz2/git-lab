#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Введите два целых числа: ");

    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Ошибка ввода.\n");
        return 1;
    }

    printf("Вы ввели: %d и %d\n", a, b);
    printf("Разность: %d\n", a - b);

    return 0;
}
