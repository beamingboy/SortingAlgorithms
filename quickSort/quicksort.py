def partition(array, low, high):
    pivot = array[high]

    i = low - 1
    for a in range(low, high):
        if array[a] <= pivot:
            i = i + 1

            (array[a], array[i]) = (array[i], array[a])
    

    (array[high], array[ i+ 1]) = (array[i+1], array[high])

    return i + 1


def quicksort(array, low, high):
    if low < high:

        partitionPoint = partition(array, low, high)

        quicksort(array, low, partitionPoint -1)

        quicksort(array, partitionPoint + 1, high)



data = [8, 7, 2, 1, 0, 9, 6]

print("Unsorted Array")
print(data)

size = len(data)

quicksort(data, 0, size - 1)

print('Sorted Array in Ascending Order:')
print(data)

