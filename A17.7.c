//count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>
int main()
  {
    char s[50];
    int i,calpha=0,cdigit=0,cchar=0;
    printf("Enter a string\n");
    fgets(s,50,stdin);
    for(i=0;s[i];i++)

        {
          if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
                calpha++;
          if(s[i]>=48 && s[i]<=57)
                cdigit++;
          if(s[i]>=32 && s[i]<=47 || s[i]>=58 && s[i]<=64 || s[i]>=91 && s[i]<=96 || s[i]>=123 && s[i]<=126)
              cchar++;
        }

       printf("Total aLphabets are %d\n",calpha);
       printf("Total digits are %d\n",cdigit);
       printf("Total special characters are  %d\n",cchar);
       return 0;
  }




