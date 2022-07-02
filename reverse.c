#include<stdio.h>
int main ()
{
    int array[100],i,n,value,position;
    printf("How many elements are there in an array:\n");
    scanf("%d",&n);
    printf("Enter %d elements of the array:\n",n);

    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    

    printf("Enter the element:\n");
    scanf("%d",&value);
    printf("Enter the position at which u want to add:\n");
    scanf("%d",position);
 
    for(i=n-1;i>=position-1;i--)  /* let an array be  30 20 40 60 90 80            
                                                        0  1  2  3  4  5 
                                     so this will move from 5 to 3 (supposed the position value is 3)
                                     so now the loop starts like array[i+1] will move the arr[5] to index arr[6]
                                     till 1>=2 which will be false at that time 
                                     so array[position-1=2]=value will be printed and finished*/
          array[i+1]=array[i];                         
          array[position-1]=value;
    printf("Resultant array is\n");
    for(i=0;i<-n;i++)
      printf("%d\n",array[i]);

    return 0;  
}