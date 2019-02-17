#include<stdio.h>

int find_least_common_number(int A[],int B[],int C[])
{
  int  i=0, j=0, k=0;
  int array_len_A, array_len_B, array_len_C;
  array_len_A = sizeof(A);
  array_len_B = sizeof(B);
  array_len_C = sizeof(C);

  while((i < array_len_A) && (j < array_len_B) && (k < array_len_C))
     {

     if ((A[i] == B[j]) && (B[j] == C[k]))
         return A[i];

     if ((A[i] <= B[j]) && (A[i] <= C[k]))
         i++;
     else if ((B[j] <= A[i]) && (B[j] <= C[k]))
         j++;
     else if ((C[k] <= A[i]) && (C[k] <= B[j]))
         k++;
     }
  return -1;

}



int main()
{

  int v1[] = {1, 6, 10, 14, 50};
  int v2[] = {-1, 6, 7, 8, 50};
  int v3[] = {0, 6, 7, 10, 25, 30, 50};

  int result = find_least_common_number(v1,v2,v3);

  if (result == -1)
     printf("Not found");
  else
     printf("Found smallest common number : %d \n", result);
  return 0;
}




