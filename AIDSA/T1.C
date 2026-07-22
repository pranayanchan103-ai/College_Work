#include<stdio.h>
int main() {
		int n;
		printf("\nEnter the number of elements you want inside an array:");
		scanf("%d",&n);
		int arr[n];
		printf("Input the elements you want inside an array: ");
			for(int i=0 ; i<n ; i++) {
				scanf("%d",&arr[i]);
			}
            int count=0;
            int target;
            int temp=-1;
            printf("\n Enter your target element! ");
            scanf("\n %d",&target);
                for(int i=0 ; i<n ; i++){
                    if(arr[i]==target) {
                            temp=i;
                                if(count==0) {
                                    temp=i;
                                }
                                count++;
                }
        }
            if(count==0) {
                printf("\n the element was not found in the array!");
            }
                else {
                    printf("\n the number of times the target found was: %d",count);
                printf("\n the first time it was found was on index: %d",temp);
                }
				return 0;
	}
