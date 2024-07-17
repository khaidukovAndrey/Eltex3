#include <stdio.h>

extern int div(int a, int b);
extern int mod(int a, int b);

int main()
{
    int first = 0;
    int second = 0;
    int operation =0;
    int result = 0;
    printf("Введите 2 числа:\n");
    scanf("%d %d", &first, &second);
    if(second!=0)
    {
        printf("Введите код операции:\n");
        scanf("%d", &operation);
        switch(operation)
        {
            case 0:
                result = div(first, second);
                break;
            case 1:
                result = mod(first, second);
                break;
            default:
                printf("Неверный код операции\n");
        }
        printf("Результат = %d\n", result);
    }
    else
        printf("Деление на 0 невозможно");
    return 0;
}