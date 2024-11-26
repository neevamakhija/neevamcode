#include <stdio.h> 
#include <math.h> 
int binaryToDecimal(int binary) { 
int decimal = 0, base = 1; 
while (binary > 0) { 
int lastDigit = binary % 10; 
decimal += lastDigit * base; 
base *= 2; 
binary /= 10; 
} 
return decimal; 
} 
void decimalToBinary(int decimal) { 
int binary[32], i = 0; 
while (decimal > 0) { 
binary[i++] = decimal % 2; 
decimal /= 2; 
} 
for (int j = i - 1; j >= 0; j--) { 
printf("%d", binary[j]); 
} 
printf("\n"); 
} 
int main() { 
int choice, num; 
printf("Enter 1 for Binary to Decimal, 2 for Decimal to Binary: "); 
scanf("%d", &choice); 
printf("Enter the number: "); 
scanf("%d", &num); 
if (choice == 1) 
printf("Decimal: %d\n", binaryToDecimal(num)); 
else if (choice == 2) { 
printf("Binary: "); 
decimalToBinary(num); 
} 
return 0; 
}