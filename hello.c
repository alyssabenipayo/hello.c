/******************************
 *
 * hello.c
 *
 * This script prints "Hello, world! in the terminal window.
 *
 * Created by: alyssabenipayo
 *
 * CS50 IDE // CS50x
 *
 ******************************/

// Including the header file.
#include <stdio.h>
// Including the header file, in which get_string is declared.
#include <cs50.h>

// The main function, which will start automatically.
int main(void)
{
    //get_string stores its return value in a variable called [name] of type [string].
    string name = get_string("What is your name?\n");

    // Concatenates the user's name with a greeting.
    // Prints "Hello!" in the terminal window.
    printf("Hello! Welcome to CS50 IDE, %s\n", name);
}
