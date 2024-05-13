#include"head.h"

int main() {
    

    
    myprintf("My name is %s\n", "Alice");
    myprintf("The value of x is %d\n", 42);
    myprintf("The sum of %d and %d is %d\n", 10, 20, 10 + 20);
    myprintf("The value of pi is %f\n", 3.14159);
    myprintf("%s bought %d apples for %.2f each\n", "Bob", 5, 1.25);
    myprintf("");
    myprintf("Escape sequence: %%\n");
    myprintf("Large number: %ld\n", 123456789012345);
    myprintf("This is a static message\n");

    return 0;
}


