#ifndef _STRUCT_H_
#define _STRUCT_H_


typedef struct s_number number;

struct s_number {
    int value;
    number *next;
};

#endif