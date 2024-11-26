#include <stdio.h> 
int main() { 
int marks[] = {78, 99, 55, 100, 39}; 
int n = 5; 
int max = marks[0], min = marks[0]; 
for (int i = 1; i < n; i++) { 
if (marks[i] > max) { 
max = marks[i]; 
} 
if (marks[i] < min) { 
min = marks[i]; 
} 
} 
printf("Maximum score: %d\n", max); 
printf("Minimum score: %d", min); 
return 0; 
}