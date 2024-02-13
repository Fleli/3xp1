
#include <stdio.h>
#include "State.h"

int main(int argc, char *argv[]) {
    
    for (int i = 1; i < 2; i++) {
            
        Number next;
        
        next.coefficient = 2 << i;
        next.constant = 1;
        
        while (next.constant < next.coefficient) {
            
            Number n = next;
            
            printf("Attempt with %dn + %d\n", n.coefficient, n.constant);
            
            while (continue_action(n) != END ) {
                n = do_action(continue_action(n), n);
                printf("%dn + %d\n", n.coefficient, n.constant);
            }
            
            if (continue_action(n) == END && n.coefficient >= next.coefficient) {
                printf("@- %dn + %d\n", next.coefficient, next.constant);
            } else {
                printf("@Y %dn + %d\n", next.coefficient, next.constant);
            }
            
            next.constant += 2;
            
        }
        
        printf("Finished i == %d.\n", i);
        
    }
    
    return 0;
    
}

