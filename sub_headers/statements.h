/*
 * this header file contain all the statemetns and loops 
 */

#define getASize(array) sizeof((&a)[1])/sizeof(&a);
#define for_loop for

#define either(body...) else { body }
#define ifnot(__condition, body...) else if __condition { body }
#define when(__condition, body...) if __condition { body } 
#define and &&
#define or ||


#define loop(__var_name, __start, __end, body...) for_loop(int __var_name = __start; __var_name < __end; __var_name++) { body }

#define loopC(__condition, body...) for_loop __condition { body }

#define loop_on(__var_name, __array, body...)\
{\
long size = getASize(__array)\
    loop(__var_name, 0, size,\
        body\
    )\
}

#define while(__condition, body...) while_loop __condition { body }