#include <stdio.h> 
int main() { 
int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2}; 
int size = 10, i, j, flag = 0; 
for (i = 0; i < size; i++) { 
for (j = i + 1; j < size; j++) { 
if (arr[i] == arr[j]) { 
printf("%d ", arr[i]); 
flag = 1; 
break; 
} 
} 
for (j = 0; j < i; j++) { 
if (arr[i] == arr[j]) break; 
} 
} 
if (flag == 0) printf("-1\n"); 
return 0; 
}