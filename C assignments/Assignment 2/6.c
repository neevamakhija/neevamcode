#include <stdio.h> 
int main() { 
int marks[] = {78, 99, 55, 99, 39}; 
int n = 5, sum = 0; 
for (int i = 0; i < n; i++) { 
sum += marks[i]; 
} 
float average = sum / (float)n; 
printf("Average score: %.2f", average); 
return 0;
}