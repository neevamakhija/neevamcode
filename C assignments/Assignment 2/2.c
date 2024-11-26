#include <stdio.h> 
int main() { 
int marks[] = {78, 65, 55, 82, 39}; 
int n = 5; 
for (int i = 0; i < n; i++) { 
if (marks[i] >= 75) { 
printf("A "); 
} else if (marks[i] >= 60) { 
printf("B "); 
} else if (marks[i] >= 40) { 
printf("C "); 
} else { 
printf("D "); 
} 
} 
return 0; 
}