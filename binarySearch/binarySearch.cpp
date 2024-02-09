#include <iostream>

int binarysearch(int *array, int low, int high, int element)
{
    if (low < high)
    {
        int middle = (low + high) / 2;

        if (*(array + middle) > element)
        {
            return binarysearch(array, low, middle - 1, element);
        }
        else if (*(array + middle) < element)
        {
            return binarysearch(array, middle + 1, high, element);
        }
        else if (*(array + middle) == element)
        {
            return middle;
        }
    }

    return -1;
}

// Driver code
int main()
{
    int data[] = {0, 1, 2, 6, 7, 8, 9};
    int n = sizeof(data) / sizeof(data[0]);

    // perform binary Search on data
    std ::cout << "Location fo the element: \n";
    std ::cout << binarysearch(data, 0, n - 1, 1) << std ::endl;
}