#include <stdio.h> 
int main() { 
int a = 56, b = 98, temp; 
while (b != 0) { 
temp = b; 
b = a % b; 
a = temp; 
} 
printf("HCF: %d\n", a); 
return 0; 
}