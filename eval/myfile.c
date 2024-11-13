#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter size");
    scanf("%d",&n);
    int arr[n];
    int i,j;
    for(i=0;i<n;i++){
        printf("Enter");
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1; j++) {
            int min=arr[j+1];
            if(arr[j] > min) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted");
    for(i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
}
