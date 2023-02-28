#include <iostream>
#include <stdlib.h>
#include <time.h>
int main() {
    int s, c,number;
    printf("Введите количество строк:\n");
    scanf("%i", &s);
    printf("Введите количество столбцов:\n");
    scanf("%i", &c);
    printf("Введите числа:\n");
    int mas[s][c];
    srand(time(NULL));
    int max = 7;
    int min = -2;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < c; j++) {
            mas[i][j] = rand() % (max - min + 1) + min;
        }
    }

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < c; j++) {
            printf("%3i", mas[i][j]);
        }
        printf("\n");
    }
    return 0;
}
