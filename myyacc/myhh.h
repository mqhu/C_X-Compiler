#ifndef MAIN_MYHPP  
#define MAIN_MYHPP  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct type
{  
    int val;  
    int val_type; //0 is int, 1 is bool, 2 is int_array, 3 is bool_array
    char id_val[30];  
    int rel_type;
}Type;  


#define YYSTYPE Type

#endif