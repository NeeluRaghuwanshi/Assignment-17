//convert a given string into lowercase
#include<stdio.h>
int main()
  {
    char s[20];
    int i;
    printf("Enter a string\n");
    fgets(s,20,stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
    }
    printf("string in lower case : %s\n",s);
    return 0;
  }
