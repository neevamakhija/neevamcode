#include <stdio.h> 
int main() { 
int num = 28, sum = 0, i; 
for (i = 1; i < num; i++) { 
if (num % i == 0) sum += i; 
} 
if (sum == num) 
printf("Perfect Number\n"); 
else 
printf("Not a Perfect Number\n"); 
return 0;
}