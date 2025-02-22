#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pointer will hold the address of the block
    int* ptr;
    int n;
    int i;

    //Get the number of the elements
    n = 5;
    printf("Enter the number of elements: %d\n", n);

    //Allocated the memory using calloc
    ptr = (int*)calloc(n, sizeof(int));

    //Check if the memory is allocated
    if(ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        //Memory has been added
        printf("Memory has been added\n");

        //Get the elements in the array
        for(i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        //Print the elements
        printf("Elements: ");
        for(i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
    }
    return 0;
}