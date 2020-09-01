#include <stdbool.h>
#include <stdio.h>

bool is_vowel(char c) {
    int vowel;
    char a = 'a', A = 'A', e = 'e', E = 'E', i = 'i', I = 'I', o = 'o', O = 'O', u = 'u', U = 'U';
    
    if (c == a | c == A | c == e | c == E | c == i | c == I | c == o | c == O | c == u | c == U)
    {
        vowel = 1;
    }
    else
    {
        vowel = 0;
    }
    return vowel;
}

int main(void) {
    int testcase1 = is_vowel('a');
    int testcase2 = is_vowel('E');
    int testcase3 = is_vowel('i');
    int testcase4 = is_vowel('z');
    int testcase5 = is_vowel('b');

    printf("Test case 1: %d\n", testcase1);
    printf("Test case 2: %d\n", testcase2);
    printf("Test case 3: %d\n", testcase3);
    printf("Test case 4: %d\n", testcase4);
    printf("Test case 5: %d\n", testcase5);
}