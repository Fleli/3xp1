
#pragma once

typedef struct {
    int coefficient;    // a
    int constant;       // b
} Number;               // a*n + b

typedef enum {
    END,
    MUL,
    DIV
} Action;

Action continue_action(Number n);

Number do_action(Action a, Number n);
