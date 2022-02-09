#include <stdio.h>
#include <string.h>


int my_string_index(char* param_1, char param_2)
{

    int index;
    for(index = 0; index <= strlen(param_1); index++){
        if(param_1[index] == param_2){
            return index;
        }
    }
  return -1;  
}
