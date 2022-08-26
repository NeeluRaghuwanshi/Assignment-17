//copy one string to another string.
#include<stdio.h>
int main()
{
  char str1[50],str2[50];
  int i;
  printf("Enter a string : ");
  fgets(str1,50,stdin);
  for(i=0;str1[i];i++)
  {
       str2[i]=str1[i];
  }

    printf("%s is copied string",str2);
    return 0;
    }
