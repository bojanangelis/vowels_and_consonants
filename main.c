#include <stdio.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);

    return c == 'a' || c == 'e' || c == 'u' || c == 'o' || c == 'i';
}

int main() {
    FILE *f = fopen("/Users/bojanangjeleski/CLionProjects/untitled129/text.txt", "r");

    char curr;
    int vowel = 0, consonants = 0;
    while ((curr = fgetc(f)) != EOF) {
        if (isalpha(curr)) {
            if (isVowel(curr)) {
                vowel++;
            } else {
                consonants++;
            }
        }
    }
    fclose(f);
    printf("Relationship vowel / consonants: %d / %d = %.2f", vowel, consonants, (float) vowel / consonants);
    return 0;
}
