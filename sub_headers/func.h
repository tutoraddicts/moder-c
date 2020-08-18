// #define import(__header) #include<__header>

/*
 * main function to declear it 
 * __main__(
 *  ##body empty body not exeptable;
 * )
 */
#define __main__(body...)  int main(int arg, char** args){ __FILE__, __LINE__, print("") body }

/*
 * Declear a function 
 * 
 */
#define def(__name, args...) void __name( ## args );

/*
 * Define a function 
 * func(name_of_the_function,(function arguiments if any else empty),
 *  ## function body can't be empty
 * )
 */
#define func(__name, __func_arguments , args... ) void __name __func_arguments{ __FILE__, __LINE__, print("") args }

/*
 * Call a function
 * call(function_name, (arguiments if any else empty))
 */
#define call(__func, args) __func args;
 

