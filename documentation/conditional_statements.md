# CONDITIONAL STATEMENTS
Let's see how can we write *if else statement and loops*

## How To Write *if else* statements
Just to remind you that if you do not like you can always write if else statement in default C syntax

Let's see how *if* statement should look like

    when( ( conditions ), // yes we are going to use when instead of if :P
           body of id statement
        )

Let's see how *else* statement should look like

    either( // I know I know I am super pro :()
        else body
    )

Lastly let's see how *else if* statement should look like

    ifnot( (condition),
        else if body
    )

Now let's write full *if else* statement

    when( (1), // I know always going to be true
        print("I am young my boy!")
    )
    ifnot( (2),
        print("I am still young :)")
    )
    either(
        print("ok I aggree I am young")
    )

### Logical Operators
I guess you all ready know how logical operator gonna look still let's see

We have two logical operators here 

    1. and
    2. or
    3. equal
    4. not_equal
    5. not

Let's see and example >

    when( (1 equal 1 and 2 not_equal 3), 
        print("uff hard route")
    )
    ifnot( (1 not_equal 3 and not 0),
        print("THis route never come")
    )
    either(
        print("life is awsome")
    )

## How to write Loops
Let's first talk about for loops

For now the library have three type of for loop

#### 1. loop 
normally people use this kind of loop ***(int i = 0; i < end; i++)*** for those cases this loop is ideal

    loop(i, 0, 2, // loop ( variable_name, start_no, end_no
        body of this loop
    )

#### 2. loopC
Somethims people need different type of loops or they have diffetent needs. This **loopC** is for them

Let's see an example

    loopC( (int i = 0; i < 3; i++), // I don't think I need to explain this
        loop body 
    )

#### 3. loop_on
This is a range based loop only use when you are dealing with array

Let's see the syntax

    int array[] = {1, 2, 3};
    loop_on(my_var, array,
        print("%d\n", my_var) // It will loop through my var
        print("%d\n", array[index]) // you can this like this too
    )

**Let's see how can we write while loop**

Syntax is quite simple

    while( (__conditions),  // I don't think now I need to explain too much
        body
    )