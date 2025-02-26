#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LOWER "abcdefghijklmnopqrstuvwxyz"
#define UPPER "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DIGITS "0123456789"
#define SPECIAL "!@#$%^&*()-_=+[]{}|;:'\",.<>?/"

void generatePassword(int length, int useLower, int useUpper, int useDigits, int useSpecial) {
    char pool[256] = "";
    int i, poolSize = 0;

    if (useLower) strcat(pool, LOWER);
    if (useUpper) strcat(pool, UPPER);
    if (useDigits) strcat(pool, DIGITS);
    if (useSpecial) strcat(pool, SPECIAL);

    poolSize = strlen(pool);
    if (poolSize == 0) {
        printf("Error: No character set selected!\n");
        return;
    }

    char *password = (char *)malloc((length + 1) * sizeof(char));
    if (password == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    for (i = 0; i < length; i++) {
        password[i] = pool[rand() % poolSize];
    }
    password[length] = '\0';

    printf("Generated Password: %s\n", password);
    free(password);
}

int main() {
    int length, useLower, useUpper, useDigits, useSpecial;

    printf("Enter password length: ");
    scanf("%d", &length);

    printf("Include lowercase letters? (1 for Yes, 0 for No): ");
    scanf("%d", &useLower);

    printf("Include uppercase letters? (1 for Yes, 0 for No): ");
    scanf("%d", &useUpper);

    printf("Include numbers? (1 for Yes, 0 for No): ");
    scanf("%d", &useDigits);

    printf("Include special characters? (1 for Yes, 0 for No): ");
    scanf("%d", &useSpecial);

    srand(time(NULL)); // Move srand to main()

    generatePassword(length, useLower, useUpper, useDigits, useSpecial);

    return 0;
}
