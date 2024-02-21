#include <stdio.h>
#include <stdlib.h>
// malloc, calloc, realloc and free
int main()
{
    int size;
    int *ptr;
    printf("Enter array size : ");
    scanf("%d", &size);
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
    }

    printf("Please enter element is array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("The element is : %d\n", ptr[i]);
    }
    free(ptr);
    
    // memory leaked when access below code
    for (int i = 0; i < size; i++)
    {
        printf("The element is : %d\n", ptr[i]);
    }

    return 0;
}