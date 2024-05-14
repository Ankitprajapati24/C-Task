# C-Task
## Concept i have used
I define a function called `myprintf( )` that takes a format string and a variable number of arguments. The `va_list` variable args is used to hold the variable arguments, and is initialized using the `va_start()` function. The `vprintf( )` function is then used to output the formatted string with the provided arguments. Finally, the `va_end()` function is called to clean up the va_list.

When we call the `myprintf()` function with a format string and variables, it behaves just like the `printf()` function, outputting the formatted string to the console.

## So to simulate the behavior of the `printf()` function in C without using it, you need to understand how it works.
### I have used Variadic functions
## Variadic functions :
![Variadic functions in C - GeeksforGeeks - Brave 14-05-2024 10_29_59 AM](https://github.com/Ankitprajapati24/C-Task/assets/130354420/b51f9e28-adaa-449c-b0db-182a95d35844)

## There are three main elements used in variadic functions :
* The `va_list` type: This is a type defined in the stdarg.h library. It is used to declare a variable that will hold the variable arguments passed to the function.
* The `va_start` macro: This macro initializes the `va_list` variable with the starting address of the first argument, and it takes two arguments - the `va_list` variable and the last named parameter of the function.
* The `va_arg` macro: to retrieve arguments passed to a function that accepts a variable number of arguments.


  ```mermaid
graph TD;
    Start -->Initialization;
    Initialization-->Loop through the format string;
   Initialization-->Loop through the format string-->Check for % character;
    Loop through the format string-->Check for % character-->Get the specifier character;
    Get the specifier character-->If it's %c
    handle %c
    Else if it's %s
    handle %s
    Else if it's %d
    handle %d
    Else if it's %f
    handle %f
    Else
    handle other;
    If it's %c
    handle %c
    Else if it's %s
    handle %s
    Else if it's %d
    handle %d
    Else if it's %f
    handle %f
    Else
    handle other-->Move to next character in format string;
    Move to next character in format string-->Continue looping until the end of the format string is reached;
    Continue looping until the end of the format string is reached-->End of loop;
    End of loop-->Cleanup and return;
    Cleanup and return--> Stop;
```


