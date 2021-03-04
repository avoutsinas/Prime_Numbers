#include <stdio.h>

void printPrime(int n){

  int i;
  int prime;

  for(i=2;i<n;i=i+1){
    if(n%i==0){
      prime=0;
      break; 
    }  
    else{
      prime=1;
    }  
  }   
  if(n==1){
    printf("The number %d is neither prime or composite\n",n);
  }
  else if(n==2){
    printf("The number %d is prime\n",n); 
  }
  else if(prime==1){
    printf("The number %d is prime\n",n); 
  }
}

int main(void) {
  
  int a;
  int input;

  printf("Enter the max number you want to detect primes up to:\n");
  scanf("%d",&input);

  for(a=1;a<=input;a=a+1){
    printPrime(a);
  }

  return 0;
}