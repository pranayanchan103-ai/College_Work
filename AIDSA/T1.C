#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements you want inside an array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input the elements you want inside an array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int target;
    int temp = -1;

    printf("Enter your target element: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            if(count == 0) {
                temp = i;
            }
            count++;
        }
    }

    if(count == 0) {
        printf("The element was not found in the array!\n");
    } else {
        printf("The number of times the target was found: %d\n", count);
        printf("The first occurrence was at index: %d\n", temp);
    }

    return 0;
}
