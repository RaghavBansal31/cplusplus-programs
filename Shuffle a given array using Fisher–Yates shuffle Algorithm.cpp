#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray (int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// A function to generate a random permutation of arr[]
void randomize (int arr[], int n)
{
    // Use a different seed value so that we don't get same result each time we run this program
    srand (time(NULL));

    for (int i = 0; i <n; i++)
    {

        int j = rand() % (i + 1);
        swap(&arr[i], &arr[j]);
    }
}

// Driver Code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    randomize (arr, n);
    printArray(arr, n);

    return 0;
}
