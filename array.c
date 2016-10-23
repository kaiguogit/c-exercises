#include <stdio.h>
#include <stdlib.h>
static int is_number_in_array(int number, int *array, int sz);
static void print_result(int number, int *array, int sz);

int main(){

    int array1[5] = {1,2,3,4,5};
    int array2[3] = {6,7,8};
    int *array3, *temp;
    int array3_sz = 0;
    array3=(int *) malloc(sizeof(int));

    for(int i=0; i<5; i++){

        array3[array3_sz] = array1[i];
        printf("lu size is %lu\n", (array3_sz+2)*sizeof(int));
        printf("int size is %d\n", (array3_sz+2));
        printf("size of int is %lu\n", sizeof(int));
        


        array3=(int *) realloc(array3,(array3_sz+2)*sizeof(int));

        array3_sz++;
    }

    for(int i=0;i<array3_sz;i++)
        printf("item in array3 is %d\n", array3[i]);


    print_result(3, array3, array3_sz);
    print_result(5, array3, array3_sz);
    print_result(11, array3, array3_sz);

}

static void print_result(int number, int *array, int sz)
{  

    printf("Array values are\n");
    for(int i=0; i<sz; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    if(is_number_in_array(number, array, sz)){
        printf("found %d in array\n", number);
    }
    else{
        printf("not found %d in array\n", number);
    }    
    printf("\n");
}
static int is_number_in_array(int number, int *array, int sz)
{
    for(int i=0; i<sz;i++){
        if( number == array[i]){
            return -1;
        }
    }
    return 0;
}