/* Write a program to perform the following operations on 1D-Array:
 Insert
 Update
 Delete
 Display
 Search */

#include <stdio.h>

int main(void)
{
    int array[5];
    printf("Enter values in the array one by one:\n");

    for (int index = 0; index < 5; index++)
    {
        scanf("%d", &array[index]);
    }

    int updateIndex;
    printf("Enter the index whose vlaue you want to update: ");
    scanf("%d", &updateIndex);
    printf("Enter the new value for the index: ");
    scanf("%d", &array[updateIndex]);
    printf("Array after updating:\n");
    for (int index = 0; index < 5; index++)
    {
        printf("array[%d]: %d\n", index, array[index]);
    }

    int deleteIndex;
    printf("Enter the index you want to delete: ");
    scanf("%d", &deleteIndex);
    for (int index = deleteIndex - 1; index < 4; index++)
    {
        array[index] = array[index + 1];
    }
    printf("Array after deletion:\n");
    for (int index = 0; index < 4; index++)
    {
        printf("array[%d]: %d\n", index, array[index]);
    }

    int valueToSearch;
    printf("Enter the value whose index you want to find: ");
    scanf("%d", &valueToSearch);
    for (int index = 0; index < 4; index++)
    {
        if (array[index] == valueToSearch)
        {
            printf("Index of value: %d\n", index);
            break;
        }
    }
}