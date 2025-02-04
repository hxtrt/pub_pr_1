#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100];  // Масив для введеного рядка

    printf("Hello, what is your nmae ?\n");  // Виправлена помилка в тексті

    scanf("%[^\n]%*c", s);  // Прибираємо & перед s

    printf("Fuck you, %s !", s); // Виводимо введене ім'я

    return 0;
}
