/**
 * arrays0.c - Buggy arrays (Solution)
 *
 * Computer Science 50
 * Section 1
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * The code below has a bug. Let's find it!
 */
#include <stdio.h>
#include <cs50.h>

int main(void) {
    string class[3] = { "Amy", "Brian", "Cathy" };

    // iterate through all the elements in the array
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", class[i]);
    }
}
