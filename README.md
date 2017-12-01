# hello-world
my (almost) first repository

I will be using this hello-world repository as I work through "The C programming language" book to log all the things I learn

Ideas for small programs:
1. Get list of unique words from some text
2. primes up to x
3. 


Section 1:

1. hello_world.c is run using "gcc -o hello_world hello_world.c" then it prints "hello, world" to the terminal with a new line

1.2. list_temps_cf.c uses a while loop to print list of Celcuis temps, then a list of fareignheight temps next to it

Comments are in /* here */

range of int and float depend on the machine
char - byte
short - short integer
long - long integer
double - double-precision floating point

these are all machine dependent

Integer devision truncates. i.e if you multiply by 5/9 then this is truncated to 0 and you just get 0

%d specifies the integer argument

printf("%3.1d etc) means each line in the field is 3 chars wide before dec and 1 decimal wide after. printf is not in c, its in the standard library

did exercises

1.3 for_loop.c does the same as list_temps_cf.c but with a for loop instead and backwards from 300 to 0 degrees
