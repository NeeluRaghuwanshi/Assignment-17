//sort a string array in ascending order
#include <stdio.h>
int main()
     {
        char a[20],temp;
        int i,j;
        printf("Enter a string\n");
        fgets(a,20,stdin);
        for (i=0;a[i];i++)
        {
            for (j=i+1;a[j];j++)
            {
                if (a[i]>a[j])
                {
                    temp=a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }

            }

        }

        printf("string array in ascending order is %s ",a);


    }
