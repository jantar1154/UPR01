#include <stdio.h>

int main() {
    int money = 9420; // zmenit tuto hodnotu

    int b100, b200, b500, b1k, b2k, b5k;

    b5k = money / 5000;
    money -= 5000 * b5k;

    b2k = money / 2000;
    money -= 2000 * b2k;

    b1k = money / 1000;
    money -= 1000 * b1k;

    b500 = money / 500;
    money -= 500 * b500;

    b200 = money / 200;
    money -= 200 * b200;

    b100 = money / 100;
    money -= 100 * b100;

    printf("Bankovka 5000: %dx\n", b5k);
    printf("Bankovka 2000: %dx\n", b2k);
    printf("Bankovka 1000: %dx\n", b1k);
    printf("Bankovka 500: %dx\n", b500);
    printf("Bankovka 200: %dx\n", b200);
    printf("Bankovka 100: %dx\n", b100);

    return 0;
}