# FUNCTION DECLEARATION
you can *define* and *declear* a function as follow also you can use default C syntax because it is just a overlay not a nuclear bomb

## HOW TO DECLEAR A FUNCTION :
The syntax is preety simple to follow and also you can use default *C syntax* without any hassle
    func(__function_name__, (__attributes__))
***By default you do not have to return anything***
func the keyword to declear a function. And here you do not have to specify a function return type
let's see an example > let's *declear* a add function
    func(**add**, (int, int)) // we done declearing a function

## HOW TO DEFINE A FUNCTION : 
The syntax is preety simple to follow and also you can use default *C syntax* without any hassle
    def(__function_name__, (__attributes__), 
        __function_body__
    )
***By default you do not have to return anything***
def the keyword to define a function. And here you do not have to specify a function return type
let's see an example > let's *define* a add function
    def(**add**, (int **a**, int **b**), 
        __function_body__ // you can't leave function body empty
    )

## HOW TO DEFINE MAIN FUNCTION :
Declearing main function is a bit difference than normal function but easier. let's see the syntax
    __main__(
        __Function_body__
    )
***By default you do not have to return anything***
***__arg__*** is the default variabel for the total argument you are going to pass during run time
***__args__*** is the default variable for all the arguments you are passing during excution

## HOW TO CALL A FUNCTION :
You can use default C syntax to call a function or pre specified m-c way as follows
    call(__function_name__, (__arguments__))
Let's see with a example. Remeber that you we create a add function let's call that add function and let's hope our function will return the correct value :P
    call(add, (10, 15))


***And Always remember here you do not have to specify any ; even if you specify I am not coming there to bite you :P you are good to go !haha***