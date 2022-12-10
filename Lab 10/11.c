// Online C compiler to run C program online
#include <stdio.h>
typedef enum {
    INSIDE,
    OUTSIDE
} State; 
int getstate(char s){
    if ((s == ' ') || (s == ',') || (s =='\n')) {
        return OUTSIDE;
    } else {
        return INSIDE;
    }
}
typedef enum {
    ONLY_DIGIT,
    NOT_ONLY_DIGIT
} Flag;
typedef enum {
    YES,
    NO
} Is_first_chek;
int count_nums() {
    int count = 0;
    int value = 0;
    State state = INSIDE;
    Flag flag = ONLY_DIGIT;
    Is_first_chek is_first_chek = NO;
    for (char s = getchar(); s != EOF; s = getchar()){
        state = getstate(s);
        switch(state) {
            case INSIDE:
                if (!isdigit(s)) {
                    flag = NOT_ONLY_DIGIT;
                } 
                if (flag == ONLY_DIGIT) {
                    value = value * 10 + (int) s - 48;
                } else {
                    value = 0;
                }
                is_first_chek = YES;
                break;
            case OUTSIDE:
                if ((flag == ONLY_DIGIT) && (is_first_chek == YES) && (value < 65537) && (value > 0)) {
                    ++count;
                }
                value = 0;
                flag = ONLY_DIGIT;
                is_first_chek = NO;
                break;
                
        } 
    }
    return count;
}


int main(void) {
    printf("%d", count_nums());
    return 0;
}