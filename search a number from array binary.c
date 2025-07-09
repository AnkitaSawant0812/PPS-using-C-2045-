#include <stdio.h>

int main() 
{
    int arr[100], n, search, i;
    int low, high, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &search);
    low = 0;
    high = n - 1;

    while (low <= high) 
    {
        mid = (low + high) / 2;

        if (arr[mid] == search) 
        {
            printf("Number %d found at index %d (position %d).\n", search, mid, mid + 1);
            return 0;
        } else if (arr[mid] < search) 
        {
            low = mid + 1;
        } else 
        {
            high = mid - 1;
        }
    }

    printf("Number %d not found in the array.\n", search);
    return 0;
}
