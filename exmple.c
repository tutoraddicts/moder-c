#include "m-c.h"

func(pro, (int a, int b),
    var(int, y, 76)
    int ex = 0x67;
    print("Hello, World! : %d and %d and %d %d\n", a, y, ex, b)
)

__main__( 
    int a = 0;
    int b = 4;
    print("%d : %d\n", a,b)
    call(pro, (5, 10))
    return(0)
)
    
