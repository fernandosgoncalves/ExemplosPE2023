#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x){
    if(x == 0)
        return 0;
    else if(x == 1)
        return 1;
    else
        return fibonacci(x-1) + fibonacci(x-2);
}

int main(){
    int z = 11;
    printf("Fib(%d) = %d\n", z, fibonacci(z));
    return 0;
}
