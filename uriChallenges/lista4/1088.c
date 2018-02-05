#include <stdio.h>
#include <stdlib.h>

void printArray(int * array, int size){

  int curr;
  for(curr = 0; curr < size; curr++){
    printf("%d, ", array[curr]);
  }
  printf("\n");
}

int maximum(int * array, int size){

  int curr = 0;
  int max = 0;

  for(curr = 0; curr < size; curr++){
    if(array[curr] > max){ max = array[curr]; }
  }

  return max;
}

void countingSort(int * array, int size){

  int curr = 0;
  int max = maximum(array, size);
  int * counting_array = calloc(max, sizeof(int)); // Zeros out the array

  for(curr = 0; curr < size; curr ++){
    counting_array[array[curr]]++;
  }

  int num = 0;
  curr = 0;

  while(curr <= size){
    while(counting_array[num] > 0){
      array[curr] = num;
      counting_array[num]--;
      curr++;
      if(curr > size){ break; }
    }
    num++;
  }
  printArray(array, size);
}

int main(){

  int test1[] = {2, 6, 4, 3, 2, 3, 4, 6, 3, 4, 3, 5, 2, 6};
  int size1 = 14;

  countingSort(test1, size1);

  int test2[] = {5, 6, 7, 8, 5};
  int size2 = 5;

  countingSort(test2, size2);

  int test3[] = {8, 1, 2, 3, 3, 4};
  int size3 = 6;

  countingSort(test3, size3);

  return 0;
}
