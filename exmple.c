#include "m-c.h"

def(pro, (void),
    var(int, y, 76)
    int ex = 0x67;
    print("pro function! : %d and %d \n", y, ex)
)

__main__( 
    int a = 15;
    int b = 4;
    // var(int, a, 0)

    loop(i, 0, 2,
        when( (1 euqual 1 or 2 not_equal 3), 
            print("Hello!, Worlds 2: ")
            print("%d : %d \n", a,b)
        )
    )

    loopC( (int i = 0; i < 3; i++),
        when( (not i), 
            print("Hello!, Worlds 1: ")
            print("%d : %d \n", a,b)
        )
        ifnot( (i euqual 2),
            print("you can do this\n")
        )
        either(
            print("Do Nothing\n")
        )
    )
    
    call(pro)
)
    
