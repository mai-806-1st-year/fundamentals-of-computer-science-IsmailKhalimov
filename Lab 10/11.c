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
                is_first_chek = YES;
                break;
            case OUTSIDE:
                if ((flag == ONLY_DIGIT) && (is_first_chek == YES)) {
                    ++count;
                }
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