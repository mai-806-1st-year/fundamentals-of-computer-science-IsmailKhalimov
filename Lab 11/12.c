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
    YES,
    NO
} Is_odd_character;
int change_nums() {
    State state = INSIDE;
    Is_odd_character odd = YES;
    for (char s = getchar(); s != EOF; s = getchar()){
        state = getstate(s);
        switch(state) {
            case INSIDE:
                if (odd == YES) {
                    odd = NO;
                } else {
                    if (isdigit(s)) {
                        s = ' ';
                    }
                    odd = YES;
                }
                break;
            case OUTSIDE:
                if (odd == NO) {
                    odd = YES;
                }
                
                break;
                
        } 
        putchar(s);
    }
    return 0;
}


int main(void) {
    change_nums();
    return 0;
}