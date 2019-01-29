1) No. When getchar() reaches the end of the file, it will return EOF and that 
   would be the signal to stop reading the file. EOF is not an acutal character
   contained in the file, it is the return value of getchar() when the function
   reaches the end of the file itself. If you copy all of the characters in the
   file and use that copy again as input to the same program, the program will
   encounter the EOF in the same place (when it runs out of input) it did on the
   first run.
2) int magnitude(int n);
3) double smallest(double x, double y);
4) void prtbox();
5) The actual argument can be any expression with an appropriate type of value
   because the expression will be evaulated and reduce to the appropriate type
   of value before it is passed to the function. On the other hand, the formal
   argument/parameter must be a variable, because when the function is declared/
   prototyped/defined, the compiler is checking to see what types of variables
   should be passed to the function. If we simply pass in an expression, this
   doesn't inform the compiler what type of variable it should expect to see
   when the function is called. It also just wouldn't make much sense, why
   define a function prototype that always passes the same value to a function,
   for example, a numeric constant. There is no need, as the numeric constant
   could simply be written inside the function in this case, and doesn't need
   to be passed as an argument.
6) A pointer variable is a variable with a memory address assigned to it, rather
   than a discrete value of any particular type. Pointers can be used to by
   a function to manipulate the values of variables that fall outside the scope
   of said function.
7) int * size;
8) float * water_temperature;
9) A global variable is a variable that is defined outside of any function.
   
   For example:
   
   #include <stdio.h>
   int n;
   
   int main(void){
     return 0;
   }
   
   Using global variables is usually accepted in the case of constant
   values, as these cannot be altered, and makes them available to any part of a
   program.
   
10) In the example above, n is a global variable, and it can be used by any function that
   appears later in the file. This can be problematic, as this means that the
   value of the same variable can also be changed by any part of a program,
   which could lead to unintended side effects when the variable is used again
   later in the program and now has a different value than expected.