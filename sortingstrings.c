
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void sort(char** names, int n) 
{ 
	int i, j; 

	for (i = 0; i < n - 1; i++) 
		for (j = 0; j < n - i - 1; j++) 
			if (strcmp(names[j], names[j + 1]) > 0) { 
				char* temp; 
				temp = (char*)calloc(30, sizeof(char)); 
				strcpy(temp, names[j]); 
				strcpy(names[j], names[j + 1]); 
				strcpy(names[j + 1], temp); 
			} 
} 

int main() 
{ 
	char** names; 
	int n, i; 
	printf("Enter the number of names to be printed: "); 
	scanf("%d\n", &n); 

	names = (char**)calloc(n, sizeof(char*)); 

	for (i = 0; i < n; i++) 

	{ 
		names[i] = (char*)calloc(30, sizeof(char)); 
		scanf("%s", names[i]); 
	} 
	sort(names, n); 

	printf("\nArray after sorting:\n"); 
	for (i = 0; i < n; i++) 
		printf("%s\n", names[i]); 

	return 0; 
} 
