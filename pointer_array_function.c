#include <stdio.h>

// Function which is used to find the sum of array elements
int find_sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+= *(arr + i);
    }
    return sum;
}

// Function that will be used to find the maximum value in the array
int find_max(int *arr, int size)
{
    int max = *arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}

// Function that is used to search for a value
int search_value(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == key)
        {
            return i;
        }
    }
    return 1;
}

int main()
{
    int arr[5];//To read in 5 integers
    int key;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%2d", &arr[i]);
    }

    int sum = find_sum(arr, 5);
    int max = find_max(arr, 5);

    printf("Enter a value to begin search: ");
    scanf("%2d", &key);

    int index = search_value(arr, 5, key);

    printf("\n----------------------------------------------------------------------");
    printf("\nSum of array elements: %2d\n", sum);
    printf("Maximum value in array: %2d\n", max);

    if (index == -1)
    {
        printf("\n--------------------------------------------------------------------");
        printf("\nValue %d not found in the array.\n", key);
    }
    else
    {
        printf("\n--------------------------------------------------------------------");
        printf("\nValue %d found at index %d.\n", key, index);
    }

    return 0;
}
