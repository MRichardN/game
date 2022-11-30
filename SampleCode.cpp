// divibility test of 17
#include<stdio.h>
int main ()
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 17 ==0)
  {
    printf("The number is dividible by 17");
  }
  else
  {
      printf("The number is NOT dividible by 17");
  }
  


  return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int phy, chem, Bio, avg;
    
    printf("Enter marks for Phy, Chem and Bio);
    scanf(%d %d %d", &phy, &chem, &Bio);
    
    avg = (phy+chem+Bio)/3;
    printf("The average score is %d", avg);
    
    if (avg>=70 && avg<=100);
    {
        printf("Grade A");
    }
    else if (avg>=60 && avg<=69);
    {
        printf("Grade B");
    }
    else if (avg>=50 && avg<=59);
    {
        printf("Grade C");
    }
    else if (avg>=40 && avg<=49);
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail")
    }
    
    
    return 0;
}


// For loop
//a program to output the first 10 numbers
#include<stdio.h>
void main ()
{
  int i;
  printf("The first 10 numbers using a for loop. \n");
  for (i=100; i>=1; i--)  //for(initialize; condition; increment/decremnet)
  //for(start; stop; step)
  {
      printf("%d\n",i);
  }
  //printf("\n");
}


// while loop
//a program to output the first 10 numbers
#include<stdio.h>
int main ()
{
  int n=100; //start
  while (n>0)  //stop
  {
    printf("%d\n",n);  // print n
    n -=5; //step
  }
  printf("End of Loop");
  
  return 0;
}