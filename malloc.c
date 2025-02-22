#include <stdio.h>
#include <stdlib.h>

//Using Malloc for memory allocation

int main()
{
    //base address and pointer
    int* ptr;
    int n;
    int i;

    printf("Enter number of elements:");
    scanf("%d, &n");
    printf("Enterer number of elements: %d\n", n);

    //Allocate the memory
    ptr = (int*)malloc(n * sizeof(int));

    //If statement to chekc to see if the memory was added
    if(ptr == NULL)
    {
        printf("Memory Not Allocated.\n");
        exit(0);
    }
    //Else memory was added
    else
    {
        printf("Memory successfully allocated\n");

        //Get the elements of the array
        for(i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        //Print out the elements
        printf("The elements of the array are: ");
        for(i = 0; i < n; ++i)
        {
            printf("%d,", ptr[i]);
        }

    }
    return 0;
}