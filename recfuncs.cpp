#include "recfuncs.h"
#include <stdlib.h>

int calc_array_size(int n){
  if(n == 0) {
    return 1;
  }
  return 2*calc_array_size(n-1);
}
int convert_to_binary(int n){
  if(n == 0) {
     return 0;
   }
  return (n%2)+10*convert_to_binary(n/2);
}

int* create_array(int size){
  if(size > 0)
  {
    int* start = (int*)malloc(sizeof(int));
    start[0] = -1;
    help_create(size, 1, start);
    return start;
  }
  return 0;
}

void help_create(int size, int i, int* start) {

}

int calc_factorial(int n){
  if(n == 0) {
    return 1;
  }
  return n*calc_factorial(n-1);
}

void calc_sums(int* nums,int size, int* out_arr, int* out_arr_bin)
{
  thx(nums, size-1, out_arr,out_arr_bin,0,0,0);
}

int thx(int* nums,int size, int* out_arr, int* out_arr_bin, int i, int index, int sum)
{
  return 0;
}

struct CalculationResults perform_calculations(int* arr, int n){
return 0;
}
