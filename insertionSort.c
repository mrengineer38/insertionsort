#include <stdio.h>
#define A_SIZE 6
 
void insertion_sort(int *p, int size);
void print_array(int *p, int size);
 
 
int main(void)
{
   int a[A_SIZE] = {22, 27, 16, 2, 18, 6};

   print_array(a, A_SIZE);
   insertion_sort(a, A_SIZE);
   print_array(a, A_SIZE);
   return 0;
}
/**************************************/
void insertion_sort(int *p, int size)
{
   int   i, j, t;
 
   for (i = 0; ++i < size; ) {
      t = p[i];
      for (j = i; p[j - 1] > t; ) {
         p[j] = p[j - 1];
            if (--j <= 0) break;
      }
      p[j] = t;
   }
}
/**************************************/
void print_array(int *p, int size)
{
   int i;
 
   for (i = 0; i < size; i++)
      printf("%d ", p[i]);
   putchar('\n');
}