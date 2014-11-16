#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void remove_chars(char*);

void main(){
	char* sequence[256];
	int i;

	printf("Input string: ");
	fgets(sequence, sizeof(sequence), stdin);
	int length = strlen(sequence) - 1;
	printf("Length: %d", length);
	if (length%2 == 0){
		remove_chars(sequence);
	}
	printf("\n\nResult: %s", sequence);

	_getch();
}

void remove_chars(char* str) {
	int length = strlen(str);
	
	str[length - 3] = '\0';
	memmove(str, str + 2, length);
}