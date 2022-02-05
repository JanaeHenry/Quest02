/*If you use for(int i=0; str[i];i++) this loop also runs as long 
as the elements inside array of characters are true not '\0'. 
Which you can count it until '\0. In the code below you can see the same thing with while
 loop but when you return you should do -1 as when loop encounters '\0' it terminates but it also adds 1. 
 If this confuses you, you can use same logic with for(length=0; ch[length];length++); then you don't have to do -1;*/


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