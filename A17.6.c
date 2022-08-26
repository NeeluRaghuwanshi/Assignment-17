//program to reverse a string
#include<stdio.h>
#include<string.h>
int main()
  {
    char s[20],t;
    int i,l;
    printf("Enter a string\n");
    fgets(s,20,stdin);
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
    {
        t=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=t;
    }

    printf("Reverse string is: %s\n",s);
    return 0;
  }
