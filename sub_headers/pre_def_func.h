#include <stdio.h>
#include <string.h>
/*
 * Print to the console 
 * print("hello, World!")
 * print("%d", vaeiable)
 */

#define print(__s, args...) printf(__s, ## args);

/*
 * return value send(vale)
 */
#define send(__val) return __val;

/*
 * declear variable
 * var(variable_type, name, value)
 */
#define var(__data_type, __name, __data...) __data_type __name = __data;