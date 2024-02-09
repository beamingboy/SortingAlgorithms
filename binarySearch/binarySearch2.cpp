#include <iostream>

int binarysearch(int *array, int low, int high, int element)
{
    while(low <= high)
    {
        int middle = (low + high)/2;
        
        if(array[middle] == element)
        {
            return middle;
        }
        if(array[middle] < element)
        {
            low = middle + 1;
        } else{
            high = middle - 1;
        }
    }

    return -1;
}

// Driver code
int main() {
  int data[] = {0, 1, 2, 6, 7, 8, 9};
  int n = sizeof(data) / sizeof(data[0]);
  
  // perform binary Search on data
  std :: cout << "Location fo the element: \n";
  std :: cout << binarysearch(data, 0, n - 1, 7) << std :: endl;
}