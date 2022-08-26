//count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
  char x, str[50];
  int i,c=0;
  printf("Enter a string : ");
  fgets(str,50,stdin);
  printf("Enter a character : ");
  scanf("%c",&x);
  for(i=0;str[i];i++)
    {
      if(x==str[i])
        c++;
    }
  printf("  %d times",c);
  return 0;

}
