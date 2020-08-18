// #define import(__header) #include<__header>

/*
 * main function to declear it 
 * __main__(
 *  ##body empty body not exeptable;
 * )
 */
#define __main__(body...)\
int main(int __arg__, char** __args__)\
{ __FILE__, __LINE__, print("") body return(0)}

/*
 * Declear a function 
 * 
 */
#define func(__name, args...) void* __name( ## args );

/*
 * Define a function 
 * func(name_of_the_function,(function arguiments if any else empty),
 *  ## function body can't be empty
 * )
 */
#define def(__name, __func_arguments , args... )\
void* __name __func_arguments\
{ print("") args return(0) }

/*
 * Call a function
 * call(function_name, (arguiments if any else empty))
 */
#define call(__func, args...) __func(## args);
 

