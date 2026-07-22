#include <stdio.h>
int main()
{
    int n, target;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element:");
    scanf("%d", &target);
    int temp=0;
    int count = 0;
    int position = 1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            count++;

            if(temp == -1)
            {
                position = i; 
               int temp = i-1;
            }
        }
    }
    if(count > 0)
    {
        printf("Number of times your target has occured: %d\n", count);
        printf("First index where it was present %d\n", position);
    }
    else
    {
        printf("%d is not present in the array.\n", target);
    }
    return 0;
}