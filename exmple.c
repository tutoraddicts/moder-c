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
        when( (1 and 1 or 0), 
            print("Hello!, Worlds 2: ")
            print("%d : %d \n", a,b)
        )
    )

    loopC( (int i = 0; i < 2; i++),
        when( (1 and 1 or 0), 
            print("Hello!, Worlds 1: ")
            print("%d : %d \n", a,b)
        )
        ifnot( (2),
            print("you can do this")
        )
        either(
            print("Do Nothing")
        )
    )
    
    call(pro)
)
    
