#include <iostream>

void sorter() {
	//PURPOSE: Sort hardcoded values of integers in an array of size 10 by size 
	//INPUTS: nothing
	//OUTPUTS: The sorted array printed to console
	bool sorted = false; //variable for detecting whether or not the array is sorted
	bool is_swapped = false; //variable for keeping track of whether or not the array has been sorted in the current pass
	int i = 1;
	int temporary_variable; //used for keeping track of the swapped array integer
	int sorting_array[10] = { 1212, 2324, 19, 38, 1, 382, 732, 192, 83, 48 }; //declares array size 10 with hardcoded unsorted values
	while (sorted != true) { //exits the loop when the array is sorted
		is_swapped = false; //sets the is_swapped value to false at the start of the loop
		for (int i = 0; i < 9; i++) { //runs until the for loop 
			if (sorting_array[i] > sorting_array[i + 1]) { //checks if the array index is greater than the next number in the array
				temporary_variable = sorting_array[i]; //sets the temporary variable to the first index array integer
				sorting_array[i] = sorting_array[i + 1]; //sets the first index array integer to the next index array integer
				sorting_array[i + 1] = temporary_variable; //sets the next index array integer to the temporary integer value
				is_swapped = true; //sets the is_swapped variable to true
			}
		}
		if (is_swapped == false) { //checks if the is_swapped variable is false after the for loop is finished its calculations
			sorted = true; //sets sorted to true. The array is now fully sorted
		}
		}
	for (int i = 0; i < 10; i++) { //iterates through the array and prints the sorted array to console
		std::cout << sorting_array[i] << "\n";
}
}

int main() {
	sorter();
}
