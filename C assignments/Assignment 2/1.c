#include <stdio.h> 
int main() { 
int marks[] = {70, 80, 90, 85, 75}; 
int n = 5; 
for (int i = 0; i < n; i++) { 
marks[i] += 5; 
} 
for (int i = 0; i < n; i++) { 
printf("%d ", marks[i]); 
} 
return 0; 
}