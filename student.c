#include "student.h"
#include <string.h>
#include <stdlib.h>

int squareOfSmallest(int array[], int length) {
  int smallest_value = array[0];                                                      /* set smallest value to first value of array*/
  for(int count = 0; count < length; count++){                                        /* run a forloop of the length of the array*/
    if (array[count] < smallest_value){                                               /* check array if any value is smaller than the current smallest value, then replace the smallest value*/
      smallest_value = array[count];
    }
  }					      
  return (smallest_value * smallest_value);                                           /* return the square of smallest value*/
}

int findMin(int *nums, int numsSize){
  int min = nums[0];                                                                  /* set min to first value of array*/
  for(int count = 0; count < numsSize; count++){                                      /* run a forloop of the length of the array*/
    if(nums[count] < min){                                                            /* check array if any value is smaller than the current min, then replace the min*/
      min = nums[count];
    }
  }
  return min;                                                                         /* return min*/
}

bool isPalindrome(char str[]){
  int position_forward = 0;                                                           /* have a counter goes down the array*/
  int position_backward = strlen(str) - 1;                                            /* have a counter goes backward in the array*/
  int truthvalue = 1;                                                                 /* truthvalue to identify if it is a palindrome or not*/
  
  while(position_forward < strlen(str) && position_backward >= 0) {                   /* have a while loop that loops both forward and backward on the array*/
    if (str[position_forward] != str[position_backward]){                             /* check if any letter does not match*/
      truthvalue = 0;
    }
    position_forward ++;
    position_backward --;
  }

  if (truthvalue == 0){                                                               /* if the truthvale is 0, then it returns false, which means its not a palindrome*/
    return false;
  } else {                                                                            /* else if truthvalue is not 0, then it returns true, which means it is a palindrome*/
    return true;
  }
}

int freqOfChar(char str[], char key){
  int amount = 0;                                                                     /* set initial amount to 0*/
  for(int counter = 0; counter < strlen(str); counter ++) {                           /* loop through array*/
    if (key == str[counter]){                                                         /* if the key character shows up, add one to amount*/
      amount++;
    }
  }
  return amount;
}

void sort(int array[],int length){
  for (int counter1 = 0; counter1 < length; counter1++) {                             /* loop through array starting from first value*/
    for (int counter2 = counter1 + 1; counter2 < length; counter2++) {                /* loop through array starting from second value*/
      if (array[counter2] < array[counter1]) {                                        /* compare every other value with the current position value*/
	int value = array[counter1];                                                  /* change location of the smaller value with the current value, hold that current value*/
	array[counter1] = array[counter2];
	array[counter2] = value;
      }
    }
  }
}

int* twoSum(int* nums, int numsSize, int target){
  int* values;                                                                        /* set up and give memory size with malloc*/
  values = (int*)malloc(numsSize * sizeof (int));
  
  for (int counter1 = 0; counter1 < numsSize; counter1++) {                           /* loop through array starting from first value*/
    for (int counter2 = counter1 + 1; counter2 < numsSize; counter2++) {              /* loop through array starting from second value*/
      if (nums[counter1] + nums[counter2] == target){                                 /* if any two different value adds up to the target, save it in the array*/
        values[0] = nums[counter1];
	values[1] = nums[counter2];
	break;                                                                        /* break after finding two correct values*/
      }
    }
  }
  return values;
}

 int* decryptPointer(int array[], int length, int *key[]) {
   int* solution;                                                                     /* set up and give memory size with malloc*/
   solution = (int*)malloc(length * sizeof (int));

   for (int counter = 0; counter < length; counter++) {                               /* loop through both array, add and save to a new array at the same position*/
     solution[counter] = array[counter] + *key[counter];
   }
        return  solution;
 }


 




