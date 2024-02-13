
#include <stdlib.h>
#include "State.h"

Action continue_action(Number n) {
    if (n.coefficient % 2 == 1) {
        return END;
    } else if (n.constant % 2 == 1) {
        return MUL;
    } else {
        return DIV;
    }
}

Number do_action(Action a, Number n) {
    
    if (a == MUL) {
        Number new;
        new.coefficient = n.coefficient * 3;
        new.constant = n.constant * 3 + 1;
        return new;
    } else if (a == DIV) {
        Number new;
        new.coefficient = n.coefficient / 2; 
        new.constant = n.constant / 2;
        return new;
    } else {
        exit(1);
    }
    
}
