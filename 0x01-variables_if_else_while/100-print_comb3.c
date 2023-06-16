#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */


int main() {
    int i = 0;
    int j = 1;

    while (i < 9) {
        putchar(i + '0');
        putchar(j + '0');

        if (i != 8 || j != 9) {
            putchar(',');
            putchar(' ');
        }

  
        j++;

  
        if (j > 9) {
            i++;
            j = i + 1;
        }

        if (i == 8 && j == 9)
            break;
    }

    return 0;
}

