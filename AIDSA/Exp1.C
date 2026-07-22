#include<stdio.h>
int main() {
    int n;
    printf("\n Enter the number of elements you want inside your array:");
    scanf("%d",&n);
    int arr[n];
        printf("\nEnter the elements inside your array: ");
        for(int i=0;i<n;i++) {
            scanf("%d",&arr[i]);
        }
            int target;
            int count=0;
            int temp=-1;
            printf("\n Enter your target element:");
            scanf("%d",&target);
            for(int i=0;i<n;i++) {
                if(arr[i]==target){
                    count++;
                        if(temp==-1) {
                            temp=i;
                        }
                }
            }
            if(count==0) {
                printf("\n Element was not present in the index!");
            } else {
                    printf("\n Element was found %d times in the array",count);
                    printf("\n elements first index is: %d",temp);
            }
        return 0;
}
