#include <stdio.h> 
int main() { 
int arr[100] = {10, 20, 30, 40, 50}; 
int size = 5; 
int pos, val, i; 
printf("Original Array: "); 
for (i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
val = 5; 
for (i = size; i > 0; i--) { 
arr[i] = arr[i - 1]; 
} 
arr[0] = val; 
size++; 
printf("After Insert at Front: "); 
for (i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
pos = 3; 
val = 25; 
for (i = size; i > pos - 1; i--) { 
arr[i] = arr[i - 1]; 
} 
arr[pos - 1] = val; 
size++; 
printf("After Insert at Position %d: ", pos); 
for (i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
val = 60; 
arr[size] = val; 
size++; 
printf("After Insert at End: "); 
for (i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
printf("\n"); 
return 0; 
}