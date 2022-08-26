//calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
  {
    int i;
    char str[50]={"education"};
    for(i=0;str[i];i++);
    printf("length is %d\n",i);
    return 0;
  }
