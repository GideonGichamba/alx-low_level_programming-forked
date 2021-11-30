# Dyanamic Library
A software library: a collection of pre-compiled routines or modules that are used in a program
### Static Library
They are object files that arejoined to source code befor it is compiled by a static linker to make it fully sufficient
### Dynamic Libraries
They are collection of object files that are referenced during build time to give the executable information on how they will be used but they aren't used until run time

Suppose there is an Entry Point that calls a function named show_message, which prints “Hello world” on the screen:

Show_message.c
```c
#include<header.h>
#include<stdio.h>
void show_message(){
    printf("hello world");
}
```
Main.c
```c
#include<header.h>
void main(){
    show_message();
    return(0);
}
```

# creating object file

```bash
$ gcc -Wall -fPIC -c show_massage.c
```
The flags used are ```-Wall```, which prints all warning messages, and ```-c```, which creates the object file ```.o```. ```-fPIC``` flag generates position-independent code, which accesses all constant address stored in the Global Offset Table (GOT). This table is used by executable programs to find, during runtime, address of functions — of calculator, in this example— and global variables unknown in compile time.

Once the object files are created — calculator.o, in this example —the library is created. The following command line can be used:

```bash
$ gcc -shared -Wl,-soname,libcalc.so -o libcalc.so *.o
```
```-shared``` flag generates a shared object which, at the moment to be compiled with another object file, it could be linked to form an executable file. ```-Wl```,options passes options to linker: in this case,```-soname```, to indicate the binary api compatibility of the library (0, by default). ```-o``` flag saves the output library in a file with a given name — ```libcalc.so```

# How to use them?
To use a dynamic library, it is needed to export the LD_LIBRARY_PATH environment variable, which has a value of the first searched libraries by the executable file:

```bash
$ export LD_LIBRARY_PATH=$PWD/libcalc.so:
```
As shown, the library is on the Current Working Directory — $PWD. Then, the entry point — main.c— is compiled with the created library:

```bash
$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lcalc
```
With ```-L```flag the directory where the created library resides is indicated. On the other hande, with-l flag, the name of the library is indicated to the compiler.

At the moment that a.out — the default name given by the compiler — is runned, this executable file finds the address of calculator and prints the result:
