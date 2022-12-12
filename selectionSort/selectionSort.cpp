#include <iostream>
#include <utility>


int selectionSortNum(int *array, int size)
{
    int j,i;
    int min;
    for(i = 0; i < size; i++ )
    {
        min = i;
        for(j = i+1; j < size; j++)
        {
            if(array[min] > array[j])
            {
                min = j;
            }
        }
        std::swap(array[min],array[i]);

    }
    return *array;
}

int main()
{
    int array[5] = {2,5,4,3,5};
    int size =5;
    for(int i =0; i<size;i++)
    {
        std::cout<<array[i]<<std::endl;
    }
    std::cout<<"next"<<std::endl;
    selectionSortNum(array,size);

    for(int i =0; i<size;i++)
    {
        std::cout<<array[i]<<std::endl;
    }
}