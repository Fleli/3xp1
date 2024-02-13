
#include <stdio.h>
#include "State.h"

int main() {
    
    
    printf("Running\n");
    
    for (int i = 5; i < 6; i++) {
            
        Number next;
        
        next.coefficient = 2 << i;
        next.constant = 1;
        
        while (next.constant < next.coefficient) {
            
            Number n = next;
            
            printf("Attempt with %dn + %d\n", n.coefficient, n.constant);
            
            while (continue_action(n) != END && n.coefficient >= next.coefficient) {
                n = do_action(continue_action(n), n);
                printf("%dn + %d\n", n.coefficient, n.constant);
            }
            
            if (continue_action(n) != END /*&& next.constant % 4 != 1*/) {
                printf("@Y %dn + %d\n", next.coefficient, next.constant);
            } else {
                printf("@- %dn + %d\n", next.coefficient, next.constant);
            }
            
            next.constant += 2;
            
        }
        
        printf("Finished i == %d.\n", i);
        
    }
    
    return 0;
    
}

