/* acc prog5.c -DCASE1 -o prog5 */
/* acc prog5.c -DCASE2 -o prog5 */
main ()
{ /* all scalar-variables may be initialized when defined */
/* program to show declaring variables */
/* and initializing variables */
#ifdef CASE1
char c = 'a';
double d = 1.23e+45
;
float f = 123.45;
int i = 321;
#endif
/* EXERCISE, change these to valid values */
#ifdef CASE2
double d = 'd';
float f = 2;
int i = 1.23;
char c = d;
#endif
/* display character as character */
printf("c = %c \n",c);
/* display character as integer */
printf("c = %d \n\n",c);
/* display double in scientific */
printf("d = %e \n",d);
/* display double in float or scientific */
/* lets computer decide */
printf("d = %g \n\n",d);
/* display float as floating point */
printf("f = %f\n\n",f);
/* display integer as base ten integer */
printf("i = %i \n",i);
/* display integer as base 16 integer */ 
printf("i = %x \n\n",i);
} 