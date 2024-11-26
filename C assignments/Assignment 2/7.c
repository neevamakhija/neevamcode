#include <stdio.h> 
int main() { 
int marks[] = {78, 99, 55, 100, 39}; 
int n = 5; 
for (int i = 0; i < n; i++) { 
if (marks[i] % 2 == 0) { 
printf("%d is even\n", marks[i]); 
} else { 
printf("%d is odd\n", marks[i]); 
} 
} 
return 0; 
}