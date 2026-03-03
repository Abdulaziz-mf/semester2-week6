#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * @brief recursively calculates the factorial of an integer n.
 * 
 * @param n number to find factorial of.
 * @return int n factorial.
 */
int factorial(int n) {
  // the base case - this determines when the recursion should stop
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main(int argc, char **argv) {
  int count = argc - 1;
  int *numbers;
  numbers = calloc(count,sizeof(int));
  if(argc != 4){
    printf("Error, please enter like this n C r or n P r");
    return 1;
  }
  char letter = argv[2][0];
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[3]);
  if(letter == 'C' || letter == 'P'){
    float fn = factorial(num1);
    float num3 = num1 - num2;
    float fnn = factorial(num3);
    float fr = factorial(num2);
    if(letter =='C'){
      float answer = (fn/(fr*fnn));
      printf("Answer of letter: %c is %f\n",letter,answer);
    }else if(letter=='P'){
      float answer = (fn / fnn);
      printf("Answer of letter: %c is %f\n",letter,answer);
      
    }
  }
  free(numbers);
  return 0;
}


  /*
  The program should accept a command line argument as follows:
  ./combinatorials n C r
  ./combinatorials n P r

  where n and r are both positive integers, and r is always less than or equal to n.

  for example:
  ./combinatorials 7 C 2

  Your program should then calculate and print out the correct result

  nCr should return the total combinations of r items out of n.
  This is calculated by: n! / (r! (n - r)!)

  nPr should return the total permutations of r items out of n.
  This is calculated by: n! / (n-r)!

  Add appropriate validation to your program to make your code robust.

  You should try and use functions to write your program.

  */
