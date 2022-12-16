#include <stdio.h>
#include <ctype.h>

#define VOWELS (1u << ('a' - 'a') | 1u << ('e' - 'a') | 1u << ('i' - 'a') | 1u << ('o' - 'a') |\
1u << ('u' - 'a') | 1u << ('y' - 'a'))

typedef unsigned int uint;

uint char_to_set(int ch){
    ch = tolower(ch);
    if (isalpha(ch)){
        return (1u << (ch - 'a'));
    } else{
        return 0;
    }
}

typedef enum{
    ONE_VOWEL_IN_WORD,
    NO_VOWEL_IN_WORD,
    WRONG_WORD
} state;

int main(){
    state state = NO_VOWEL_IN_WORD;
    int counter = 0;
    for (int c = getchar(); c != EOF; c = getchar()){
        if ((c == ' ') || (c == '\n') || (c == ',')){
            if (state == ONE_VOWEL_IN_WORD){
                counter++;
            }
            state = NO_VOWEL_IN_WORD;
        } else{
            if (state == NO_VOWEL_IN_WORD){
                if ((char_to_set(c) & VOWELS) != 0){
                    state = ONE_VOWEL_IN_WORD;
                }
            } else if ((state == ONE_VOWEL_IN_WORD) && ((char_to_set(c) & VOWELS) != 0)){
                    state = WRONG_WORD;
                }
        }
    }
    if (counter > 0){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}