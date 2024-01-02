#include<stdio.h>
#include<conio.h>
int main(){
    int max,min,n,i,arr[50];
    printf("Enter the numbers in array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nNumber in array at index %d is: %d", i, arr[i]);
        scanf("%d",&arr[i]);
    }
    printf("the number inserted");
    for(i=0;i<n;i++){
        printf("\nNumbers in array %d are : %d ",i,arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\n Biggest number in the given array is : %d",max);
    printf("\n Smallest numberin the given number : %d",min);
    getchar();
    return 0;
}
