/*#include <stdio.h>

int my_strlen(char* param_1)
{

}*/


#include <stdio.h>

                int my_strlen(char ch[]){
                    int length =0;
                    while(ch[length++]);
                    return length-1;
                }


               /* int main(){

                    char ch[20];
                    scanf("%s", ch);
                    // printf("%s", ch);
                    printf("%i\n",my_strlen(ch));
                    return 0;
                }*/