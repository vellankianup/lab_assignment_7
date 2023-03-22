#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[],int n)
{
    int i,j,temp, num_swaps = 0;
    for(i=0;i<n-1;i++)
    {
       
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
                num_swaps++;
            }
        }
        printf("Iteration #%d: %d\n",i+1,num_swaps);
        num_swaps = 0;
    }
     
}

int main()
{
    
    int arr[10] = {97,16,45,63,13,22,7,58,72};
    BubbleSort(arr,9);


}

