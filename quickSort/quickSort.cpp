#include <iostream>

void swapInt(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function for finding the partition
int partition(int *array, int low, int high)
{

    // selection the pivot
    int pivot = array[high];

    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (*(array + j) <= pivot)
        {
            i++;
            swapInt((array + j), (array + i));
        }
    }

    swapInt((array + high), (array + (i + 1)));

    return i + 1;
}
// Function for the quick Sort
void quicksort(int *array, int low, int high)
{

    if (low < high)
    {
        int partitionPoint = partition(array, low, high);

        // for left side
        quicksort(array, low, partitionPoint - 1);

        // for right side

        quicksort(array, partitionPoint + 1, high);
    }
}

// function to print the array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    std :: cout << array[i] << " ";
  std :: cout << std :: endl;
}


// Driver code
int main() {
  int data[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);
  
  std :: cout << "Unsorted Array: \n";
  printArray(data, n);
  
  // perform quicksort on data
  quicksort(data, 0, n - 1);
  
  std :: cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}