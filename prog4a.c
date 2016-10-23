#include <stdio.h>
main ()
{
#ifdef AAA
printf("hello from aaa\n");
#endif
#ifdef BBB
printf("hello from bbb\n");
#else
printf("What you don't like bbb?\n");
#endif
#ifndef CCC
printf("defineCCC to stop me before I print again!! \n");
#endif
} 