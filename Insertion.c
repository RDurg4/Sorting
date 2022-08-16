/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int array[1000000];
int main()
{
int i,key,ch,p;
long size,n;
printf("Enter number of Elements: ");
scanf("%ld",&size);
int array[size];
printf("Enter Upper limit in place values: ");
scanf("%ld",&n);

int num=size;
int j,x,y,temp;
if(array != NULL)
{
for(j = 0; j < num; j++)
{
array[j] = rand()%n;
}
}
printf("\n");
printf("List of Numbers:\n");
for(j = 0; j < num; j++)
{
printf("%d\n",array[j]);
}
  for (i=1;i<num;i++)
    {
        p=array[i];
        j=i-1;

        while(j>=0 && array[j]>p)
        {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j + 1] = p;
    }
    printf("Insertion Sorted List of Numbers:\n");
for(j = 0; j < num; j++)
{
printf("%d\n",array[j]);
}
}