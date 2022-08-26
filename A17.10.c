//Find the Frequency of Characters.
#include<stdio.h>
int main()
{
  char s[50],freq[150]={0};
  int i;
  printf("Enter a string :");
  fgets(s,50,stdin);
  for(i=0;s[i];)
    freq[s[i++]]++;
  for(i=0;i<150;i++)
  {
    if(freq[i] != 0)
    printf("%c ==> %d\n",i,freq[i]);

  }
  return 0;
}
