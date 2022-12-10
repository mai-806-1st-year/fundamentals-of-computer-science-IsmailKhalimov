// Online C compiler to run C program online
#include <stdio.h>
typedef enum {
    INSIDE_EVEN,
    INSIDE_ODD,
    OUTSIDE
} State_position; 
int getstate(char s, int pos){
    if ((s == ' ') || (s == ',') || (s =='\n')) {
        return OUTSIDE;
    } else {
        if (pos == 0) {
            return INSIDE_ODD;
        } else {
            return INSIDE_EVEN;
        }

    }
    
}
int change_nums() {
    int pos = 0;
    State_position st_pos = OUTSIDE;
    for (char s = getchar(); s != EOF; s = getchar()){
        st_pos = getstate(s, pos);
        switch(st_pos) {
            case INSIDE_ODD:
                ++pos;
                break;
            case INSIDE_EVEN:
                if (isdigit(s)) {
                    s = ' ';
                }
                pos = 0;
                break;
            case OUTSIDE:
                pos = 0;
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