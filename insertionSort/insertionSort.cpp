#include <iostream>
#include <utility>


int selectionSortNum(int *array, int size)
{
    int i,j;
    for(i = 0; i < size; i++ )
    {
        j=i;
        while ( (j > 0) && (array[j] < array[j-1]))
        {
            std::swap(array[j],array[j-1]);
            j--;
        }
        

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