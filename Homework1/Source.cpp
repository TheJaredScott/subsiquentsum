#include <iostream>
#include <array>

using namespace std;

int main() {

	int minimum; //stores found minimum
	int i; //for loop 1 iterator
	int holder = 0; //holds current difference to be checked
	int numbers[8] = {5, -7, 3, 2, -5, -2, 9, 1}; //array of numbers
	int asize = sizeof(numbers) / sizeof(numbers[0]); //divide length of array by length of one element of array to get number of elements in array

	for (i = 0; i < asize; i++) {

		int current = numbers[i]; //Container for current start point of array check (we start at 5 on first pass, -7 on second pass)

		for (int check = asize; check > i; check--) { // check is current max of array slice

			holder = 0;

			cout << "Checking from " << numbers[i] << " to " << numbers[check-1] << "\n";

			for (int x = i; x < asize; x++) {

				if (x < check) {
					holder += numbers[x];
					cout << holder << "\n"; // add numbers from i to check
				}

				if (i == 1 && check == asize) {
					minimum = holder; // assign holder as minimum if first addition
				}

				if (holder < minimum) {
					minimum = holder; //assign holder as minimum if less than current minimum
				}
			}
			

		}


	}

	cout << "The minimum subsequent sum is: " << minimum << " ";
	system("PAUSE");
	return 0;

}