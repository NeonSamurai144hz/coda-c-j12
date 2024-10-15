#ifndef __EX_3_H__
#define __EX_3_H__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_number number;

struct s_number {
    int value;
    number *next;
};

/* list.c */
number *create_list(int value);
void add_to_list(number **list, int value);
void display_list(number **list);
void delete_list(number **list);
void insert_after(number **link, int value);
void sort_list(number **list);


#endif