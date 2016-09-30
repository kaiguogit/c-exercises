#include <stdio.h>
int main( )
{
/* declare an integer */
int x;
/* do not count on uninitialized variables to have a certain value */
/* they could be zero and probably will be zero but, could be ??? */
printf("Unitialized x = %i\n",x);
x = 1 + 2;
printf("x with 1 + 2 = %i\n", x);
} 