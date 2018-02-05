#include <stdio.h>



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


int main() {

  int i,j,l,m,total,tamanho,p;
  int numbers[100000];
  int paresP[100000];
  int primosP[100000];




  scanf("%d",&total);

  for (i = 0; i < total; i++) {
    scanf("%d",&numbers[i] );
  }

  printf("\n");

  for (j = 0; j < total; j++) {

    if (numbers[j]%2 == 0) {
      paresP[p++] = numbers[j];
    }

  }

  for (l = 0; l < total; l++) {

    if (numbers[l]%2 != 0) {
      primosP[p++] = numbers[l];
    }
  }
    printf("%p\n",p);


  countingSort(primosP,5);


  


  return 0;




}
