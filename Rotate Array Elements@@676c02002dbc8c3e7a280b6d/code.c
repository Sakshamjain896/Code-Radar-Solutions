// C++ code to implement above approach
#include <iostream>
using namespace std;

// Function to print the array
void print(int arr[], int N)
{
	for (int i = 0; i < N; i++)
		cout << *(arr + i) << " ";
}

// Function to reverse the array
// from start to end index
void reverse(int arr[], int start, int end)
{
	int temp;
	int size = end - start;

	// Reversal based on pointer approach
	for (int i = 0; i < (size / 2); i++) {
		temp = *(arr + i + start);
		*(arr + i + start) = *(arr + start 
							+ size - i - 1);
		*(arr + start + size - i - 1) = temp;
	}
}

// Function to right rotate the array K times
void right(int arr[], int K, int N)
{
	reverse(arr, 0, N - K);
	reverse(arr, N - K, N);
	reverse(arr, 0, N);
	print(arr, N);
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int K = 2;
	right(arr, K, N);
	return 0;
}
