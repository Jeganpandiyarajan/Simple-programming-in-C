#include<stdio.h>
#include<conio.h>
int add(){
    int a,b,c;
    printf("The value of a: ");
    scanf("%d",&a);
    printf("The value of b: ");
    scanf("%d",&b);
    c=a+b;
    printf("add value: %d",c);
    
}
int mul(){
    int a,b,c;
    printf("The value of a: ");
    scanf("%d",&a);
    printf("The value of b: ");
    scanf("%d",&b);
    c=a*b;
    printf("mul value: %d",c);
}
int division(){
    int a,b,c;
    printf("The value of a: ");
    scanf("%d",&a);
    printf("The value of b: ");
    scanf("%d",&b);
    c=a/b;
    printf("div value: %d",c);
}
int sub(){
    int a,b,c;
    printf("The value of a: ");
    scanf("%d",&a);
    printf("The value of b: ");
    scanf("%d",&b);
    c=a-b;
    printf("sub value: %d",c);
}
int main(){
    int n;
    printf("\tSelect which operation do you want perform \nNO 1 for addition ,\nNO 2 for subraction,\nNO 3 for multiplication,\nNO 4 for divition");
    printf("\nEnter the number : ");
    scanf("%d",&n);
    switch(n){
        case 1:
        return add();
        break;
        
        case 2:
        return sub();
        break;
        
        case 3:
        return  mul();
        break;
        
        case 4:
        return division ();
        break;
        
        default:
         printf("Somthing went wrong");
    }
    return 0;
}
