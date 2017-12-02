# hello-world
my (almost) first repository

I will be using this hello-world repository as I work through "The C programming language" book to log all the things I learn

Ideas for small programs:
1. Get list of unique words from some text
2. primes up to x
3. ip/icmp/tcp/udp checksum
4. 


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

1.3. for_loop.c does the same as list_temps_cf.c but with a for loop instead and backwards from 300 to 0 degrees

1.4. for_loop_define.c does the same as for_loop.c but with the variables defined before the main program. they use caps names to show this

how they know the types here I don't know

1.5. 
1.5.1. read_char.c reads in a single character from terminal using getchar() and then prints it on new line

it is good practice to put assignments within longer expressions such as "c=getchar()" within the while definition

for EOF I got -1

1.5.2. count_while.c counts all the entered characters before "ctrl+D" and then prints the solution. it includes the newline as a character 

%ld prints long in printf

count_for.c does same with for loop

both the count_while and count_for return 0 if there is no input to the getchar() condition in the while/for definitions. This makes sense

++nc adds 1 each time (this is different to nc++)

1.5.3. count_lines.c counts the number of new lines and prints it after ctrl+d

== means equal to, = is assignment
characters in '' means the integer value of the numerical value of character set (e.g. 'A' is 65, or '\n' is 10)

read_blank.c is my answer to exercise 1-9 replacing duplicate spaces

1.5.4. wordc.c is the bare metal word count wc function

|| and && are evaluated left to right and stops as soon as it knows

if (){}
else if (){}

