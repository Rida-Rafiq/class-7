#include <stdio.h>

int main() {
    char name[50] = "RABI-UL-AWAL"; 
    printf("WELCOME RABI-UL-AWAL"); 
    scanf("%s", &name);

    if (name >= "RABI-UL-AWAL") {
        printf("WELCOME RABI-UL-AWAL %s", name);
    }

    return 0;
}  