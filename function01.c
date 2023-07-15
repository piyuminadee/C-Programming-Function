//Reference : w3resource
//date      : 12/07/2023
//Name      : W. P. Nadeesha

//1. Write a program in C to show the simple structure of a function.
//Expected Output :

//The total is :  11


#include <stdio.h>
#include <string.h>
/*void ca();
int main(void){
    // Here your code !
    ca();
    return 0;
}

void ca(){
    printf("The total is :  11");
}*/

//2. Write a program in C to find the square of any number using the function.
//Test Data :
//Input any number for square : 20
//Expected Output :

//The square of 20 is : 400.00

/*void main(){
  float square(float);
  float n;

  printf("Input any number for square :");
  scanf("%f", &n);
  printf("\nSquare root of given number: %f", square(n));
}

float square(float n){
  return sqrt(n);
}*/

/*3. Write a program in C to swap two numbers using a function.
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4
After swapping: n1 = 4, n2 = 2

int swapNum(int, int);

int main(){
    int n1, n2, flag;

    printf("Input 1st number:");
    scanf("%d", &n1);
    printf("\nInput 2nd number:");
    scanf("%d", &n2);
    int add = swapNum(n1, n2);
    printf("\nAfter swapping \nn1:%d\nn2:%d", add);
    return 0;

}
int swapNum(int n1, int n2){
   int flag;
   flag = n2;
   n2 = n1;
   n1 = flag;
   printf("Before swapping\nn1:%d\nn2:%d", n2, flag);
   return flag;


}*/

/*4. Write a program in C to check if a given number is even or odd using the function.
Test Data :
Input any number : 5
Expected Output :

 The entered number is odd.



int numChek(int);
int main(){
  int n;
  printf("Enter number:");
  scanf("%d", &n);
  numChek(n);
  return 0;

}

int numChek(int n){
    if(n%2==1){
        printf("\nThe entered number is odd.");
    }
    else{
         printf("\nThe entered number is even.");
    }
}
*/

/*5. Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
Expected Output :

 The sum of the series is : 34 */

 void main(){
   int sum=1, cont=0;
    for(int i=1; i<=5; i++){
      for(int j=1; j<=i; j++){
        sum = (sum*j);
      }
      sum = sum/i;
      cont = cont+sum;
      sum=1;
    }
 printf("%d", cont);
}


