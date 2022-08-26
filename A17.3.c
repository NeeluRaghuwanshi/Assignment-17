//count vowels in a given string
#include<stdio.h>
int main()
{
  char v[11]="aeiouAEIOU", str[20];
  int i,j,c=0;
  printf("Enter a string\n");
  fgets(str,20,stdin);
  for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
        {
         if(v[j]==str[i])
         c++;
        }
    }
  printf("%d vowels\n",c);
  return 0;

}
