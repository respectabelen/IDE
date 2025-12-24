#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <math.h>

/*
void fill(int *, int, int);
void print(int *, int, int);
int min(int *, int, int);
int max(int *, int, int);

int main() {
int n = 5, m = 5;

int result, result1;
int A[n][m];

srand(time(NULL));

fill(A[0], n, m);
print(A[0], n, m);
result = min(A[0], n, m);
result1 = max(A[0], n, m);

   printf("\n минимальное значение среди элементов второй строки массива = %i\n", result);
   printf("\n максимальное значение среди элементов третьего столбца массива = %i\n", result1);
}

void fill (int *pm, int rows, int cols) {
int i, j;
for(i = 0; i < rows; i++) {
   printf("\n");
   for(j = 0; j < cols; j++) {
   pm[i * cols + j] = rand() % 10 - 5;
      }
   }
}

void print (int *pm, int rows, int cols) {
int i, j;
for(i = 0; i < rows; i++) {
   printf("\n");
   for(j = 0; j < cols; j++) {
   printf("%4i", pm[i * cols + j]);
      }
   }
}

int min(int *pm, int rows, int cols) {
int sum = 0;
int row = 1;
int min1 = pm[row * cols]; 

    for(int j = 0; j < cols; j++) {
        if (pm[row * cols + j] < min1)
        min1 = pm[row * cols + j];
      }
   return min1;
}

int max(int *pm, int rows, int cols) {
    int sum = 0; 
    int col = 2; 
    int max1 = pm[col];

    for (int i = 0; i < rows; i++) {
      if (pm[i * cols + col] > max1)
      max1 = pm[i * cols + col];

    }
    return max1;
}
*/
/*
void fill(int *, int, int);
void print(int *, int, int);
int sum2(int *, int, int);
int sum3(int *, int, int, int);

int main() {
int n = 5, m = 5;

int result, result1;
int A[n][m];
int c;

printf("\n введите столбец(1-5) = ");
scanf("%i", &c);
c--;

srand(time(NULL));

fill(A[0], n, m);
print(A[0], n, m);
result = sum2(A[0], n, m);
result1 = sum3(A[0], n, m, c);

   printf("\n Сумма квадратов элементов второй строки массива = %i\n", result);
   printf("\n Сумма квадратов элементов %i-го столбца = %i\n", c+1, result1);
}

void fill (int *pm, int rows, int cols) {
int i, j;
for(i = 0; i < rows; i++) {
   printf("\n");
   for(j = 0; j < cols; j++) {
   pm[i * cols + j] = rand() % 10 - 5;
      }
   }
}

void print (int *pm, int rows, int cols) {
int i, j;
for(i = 0; i < rows; i++) {
   printf("\n");
   for(j = 0; j < cols; j++) {
   printf("%4i", pm[i * cols + j]);
      }
   }
}

int sum2(int *pm, int rows, int cols) {
int sum = 0;
int row = 1;

    for(int j = 0; j < cols; j++) {
        int x = pm[row * cols + j];
        sum += x * x;
      }
   return sum;
}

int sum3(int *pm, int rows, int cols, int c) {
    int sum = 0;

    if (c < 0 || c >= cols) {
        printf("\n такого столбца не существует \n");
        return 0;
    }

    for (int i = 0; i < rows; i++) {
        int x = pm[i * cols + c];
        sum += x * x;
    }
    return sum;
}
*/
/*
void fill(int *, int);
void print(int *, int);
int count(int *, int);

int main() {

int k; int A[m];

srand(time(NULL));

fill(A,m);
print(A,m);
k = count(A,m);

printf("\n кол во отрицательных элементов = %i", k);
}

void fill (int *pm, int n) {
int *p;
for(p = pm; p < pm + n; p++)
   *p = rand() %100 - 50;
}

void print (int *pm, int n) {
int *p;
for(p = pm; p < pm + n; p++)
printf("%i\t", *p);
}

int count(int *pm, int n) {
int k = 0;
int *p;
for(p = pm; p < pm + n; p++)
   {
      if (*p < 0)
      k++;
   }
   return k;
}
*/
{
   int A[n][m], i, j, sum1, sum2;

   sum1 = 0;
   sum2 = 0;

  srand(time(NULL));

   for (i = 0; i < n; i++)
      {
         printf("\n");
         for (j = 0; j < m; j++)
         {  
            A[i][j] = rand() % 100 - 50;
            printf("%5i", A[i][j]);
         }
      }

   for (i = 0; i < n; i++)
      {
            if (A[i][i] % 4 == 0) { sum1 += A[i][i]; }

            if (A[i][n-1-i] % 4 == 0) { sum2 += A[i][n-1-i]; }
      }  
   printf ("\n Сумма: главная диагональ = %i, побочная = %i", sum1, sum2);

   if (sum1 > sum2)
      printf("\n На главной диагонали сумма больше");
   
   if (sum1 < sum2)
      printf("\n На побочной диагонали сумма больше");
}