# Convert to tail recursion

## Prerequisites
Conditions; Functions

## Problem
The below is a head-recursive implementation of <code>factorial</code>, a function that takes in an integer, <code>n</code>, and returns its factorial. Example output:
```c    
jharvard@run.cs50.net (~): ./a.out
Enter a positive integer: 4
The result of factorial(4) is 24
```
However, this implementation is inefficient, as it requires extra computation after subsequent recursions, causing the stack to bloat unnecessarily. Fix it, by reminding yourself that arguments are calculated _before_ the call, thus enabling tail-call optimisations to occur during compilation.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

int factorial(int n);
int fact_tail(int n, int result);

int main (void)
{
    // take in array size and elements from user
    printf("please enter an integer value: ");
    int n = get_int();
    
    // print the result
    printf("The result of factorial(%i) is %i\n", n, factorial(n));
}

int factorial(int n)
{
    return fact_tail(n, 1);
}

int fact_tail(int n, int result)
{
    if (n <= 1)
    {
        return 1;     // HINT #1, change this
    }
    else
    {
        return n *    // HINT #2, move this
               fact_tail(n - 1, /* HINT #3... */    result    /* END HINT */);
    }
}
```
