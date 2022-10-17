#include "readline.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int read_line(char *str){
    while (*str != '\n' && *str != '\n'){
        if ((int)*str>=(int)'0' && (int)*str<=(int)'9') str++;
        else return 0;
    }
    return 1;
}