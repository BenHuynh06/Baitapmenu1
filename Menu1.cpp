#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void userChoice (int, int);
void input_n(int *n);
bool PerfectSquareNumber(int);
void printMinMaxDigits(int);

int main () {
	int n, choice;
	
	userChoice(choice, n);
	getchar();
	return 0;
}

void userChoice (int choice, int n) {
	do {
		printf ("1 - Process PerfectSquareNumber. \n");
		printf ("2 - Print Min Max PerfectSquareNumber. \n");
		printf ("3 - Quit.\n");
		printf ("Select an operation: ");
		scanf ("%d", &choice);
		
	switch (choice) {
			case 1: 
				do {
					input_n (&n);
				} while (n < 0);
				
				if (PerfectSquareNumber(n) == 1) {
					printf ("It is a PerfectSquareNumber\n\n");
				} else {
					printf ("It is not a PerfectSquareNumber\n\n");
				}
					break;
		
			case 2: 
				do {
					input_n (&n);
				} while (n < 0);
					printMinMaxDigits (n);
					break;
			
			case 3: 
				printf ("Quit");
				break;
		
			default: printf ("Khong the thuc hien.");
		}	
	} while (choice != 3);
}

void input_n(int *n) {
	printf ("n = "); scanf ("%d", n);
}

bool PerfectSquareNumber(int n) {
	int x = sqrt(n);
	return pow(x, 2) == n;
}

void printMinMaxDigits(int n) {
	int min = 9;
	int max = 0;
	int temp = n;
	int found = 0;
	
	while (temp > 0) {
		int digit = temp % 10;
		if (digit < min) {
			min = digit;
		}
		
		if (digit > max) {
			max = digit;
		}
		found = 1;
		temp /= 10;
	}
	
	if (found) {
		printf ("%d %d\n\n", min, max);
	} else {
		printf ("Khong the thuc hien.");
	}
}
