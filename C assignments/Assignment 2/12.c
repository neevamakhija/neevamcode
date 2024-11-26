#include <stdio.h> 
int main() { 
int arr[100] = {10, 20, 30, 40, 50}; 
int size = 5, pos, i; 
printf("Original Array: "); 
for (i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
for (i = 0; i < size - 1; i++) { 
arr[i] = arr[i + 1]; 
} 
size--; 
printf("After Delete at Front: "); 
for (i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
pos = 2; 
for (i = pos - 1; i < size - 1; i++) { 
arr[i] = arr[i + 1]; 
} 
size--; 
printf("After Delete at Position %d: ", pos); 
for (i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
size--; 
printf("After Delete at End: "); 
for (i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
return 0; 
}