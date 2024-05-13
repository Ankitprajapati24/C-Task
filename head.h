#include <stdio.h>
#include <stdarg.h>


void myprintf(const char *format, ...);


void myprintf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;

/*start checking for the specifier type*/


/* if char */
            if (format[i] == 'c') {
                char c = (char) va_arg(args, int);
                putchar(c);
            

            

            

/* if string */
            } else if (format[i] == 's') {
                char* str = va_arg(args, char*);
                for (int j = 0; str[j] != '\0'; j++) {
                    putchar(str[j]);
                }

/*if integer*/
            } else if (format[i] == 'd') {
                int d = va_arg(args, int);
                if (d < 0) {
                    putchar('-');
                    d = -d;
                }
                int digit_count = 0; 
                int tmp = d; 
 /*How many digits counter.*/ 
                do {  
                    digit_count++;    
                    tmp /= 10;    
                } while (tmp > 0);    

                     /*loop for (how many digits) times.*/
                     /*---------------------------------*/

                for (int j = digit_count - 1; j >= 0; j--) {
                    int divisor = 1;
                    for (int k = 0; k < j; k++) {
                        divisor *= 10;
                    }

   /*so if it was ex: 3 digits number the divisor will = 100 =(10x10) */

/*-------------------------------------------------------------------*/

/*to get the most left digit*/
/*ex: if 3 digits(456) so digit = (456/100)%10 = 4*/

                    int digit = (d / divisor) % 10; 
                    putchar('0' + digit);
                }

/*if double/float*/
            } else if (format[i] == 'f') {
                double f = va_arg(args, double);
                if (f < 0) {
                    putchar('-');
                    f = -f;
                }
/*extracts the integer part of the number*/

                int int_part = (int) f;
                int digits_before_decimal = 0;
                int tmp = int_part;
 /*How many digits counter.*/ 
                do {
                    digits_before_decimal++;
                    tmp /= 10;
                } while (tmp > 0);

                     /*loop for (how many digits) times.*/
                     /*---------------------------------*/

                for (int j = digits_before_decimal - 1; j >= 0; j--) {
                    int divisor = 1;
                    for (int k = 0; k < j; k++) {
                        divisor *= 10;
                    }
                    int digit = (int_part / divisor) % 10;
                    putchar('0' + digit);
                }
/*
 * after printing the digits befor the floating point, print the floating point
*/
                putchar('.');

/*the fractional part*/
                double frac_part = f - int_part;
/*two decimal places (2)*/
                for (int j = 0; j < 2; j++) {
                    frac_part *= 10;
                    int digit = (int) frac_part;
                    frac_part -= digit;
                    putchar('0' + digit);
                }
            } else {
                putchar('?');
            }
        } else {
            putchar(format[i]);
        }
    }

   
    va_end(args);
}