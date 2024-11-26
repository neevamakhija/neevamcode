#include <stdio.h> 
int main() { 
int marks[] = {78, 99, 55, 99, 39}; 
int n = 5; 
for (int i = 0; i < n; i++) { 
if (marks[i] == 99) { 
printf("First 99 found at index %d", i); 
break; 
} 
} 
return 0; 
}