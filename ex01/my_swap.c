/* Remember this...
int a = 5; // an integer, contains value
int *p; // an integer pointer, contains address
p = &a; // &a means address of a
a = *p; // *p means value stored in that address, here 5
*/




#include <stdio.h>

void my_swap(int* param_1, int* param_2)
{
 int temp = *param_1;
    *param_1 = *param_2;
    *param_2 = temp;


}