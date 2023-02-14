#include<stdio.h>
//Factorial using recursion
int factorial(int x){
    //
    int fact;
    if(x==0 || x==1){/*Base case*/
        return 1;
    }
    //
    else{
        fact=x*factorial(x-1);
        return fact;
    }
}
int main(){
    int a;
    printf("Enter a n positive integer to calculate it's factorial:\n");
    scanf("%d", &a);
    factorial(a);
    printf("Factorial of %d is %d", a, factorial(a));
return 0;
}