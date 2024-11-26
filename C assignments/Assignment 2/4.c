#include <stdio.h> 
int main() { 
int marks[] = {78, 99, 55, 99, 39}; 
int n = 5, count = 0; 
for (int i = 0; i < n; i++) { 
if (marks[i] == 99) { 
printf("99 found at index %d\n", i); 
count++; 
} 
} 
printf("Total students with 99: %d", count); 
return 0;
}