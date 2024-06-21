#include <stdio.h>

int main()
{
    int array[] = {6, 3, 1, 7, 8, 5, 2, 4};
    int size = sizeof(array) / sizeof(array[0]);

    // bubble sort

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}