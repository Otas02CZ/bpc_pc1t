#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int letter_count(char text[]) {
    int count = 0;
    for (int index=0 ; index<strlen(text) ; index++) {
        if (isalpha(text[index]))
            count++;
    }
    return count;
}

int number_count(char text[]) {
    int count = 0;
    for (int index=0 ; index<strlen(text) ; index++) {
        if (isdigit(text[index]))
            count++;
    }
    return count;
}

int maxDelkaSlova(char text[]) {
    int maxDelka = 0;
    int aktDelka = 0;
    for (int index=0 ; index<strlen(text) ; index++) {
        if (isalpha(text[index])) {
            aktDelka++;
        
        }
        else {
            if (aktDelka>maxDelka)
                maxDelka = aktDelka;
            aktDelka = 0;
        }

    }

    return maxDelka;
}

int main() {
    char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";
    printf("%d\n", letter_count(text));
    printf("%d\n", number_count(text));
    printf("%d\n", maxDelkaSlova(text));
    return 0;
}