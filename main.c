#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, ".utf-8");
    int num;

    printf("Введи число от 1 до 13: ");
    scanf("%d", &num);

    switch (num) {
    case 1: printf("Один\n"); break;
    case 2: printf("Два\n"); break;
    case 3: printf("Три\n"); break;
    case 4: printf("Чнтыре\n"); break;
    case 5: printf("Пять\n"); break;
    case 6: printf("Шесть\n"); break;
    case 7: printf("Семь\n"); break;
    case 8: printf("Восемь\n"); break;
    case 9: printf("Девять\n"); break;
    case 10: printf("Десять\n"); break;
    case 11: printf("Одиннадцать\n"); break;
    case 12: printf("Двенадцать\n"); break;
    case 13: printf("Тринадцать\n"); break;
    default: printf("Число вне диапазона\n"); break;
    }

    return 0;
}
