#include<stdio.h>

int sumArray(int arr[], int size) 
{
    int sum = 0;
    for (int i=0; i<size; i++) 
	{
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int size, sum;

    printf("Enter array size: ");
    scanf("%d", &size);
    
    int array[size];

    printf("Enter array elements:\n");
    for (int i=0; i<size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    sum = sumArray(array, size);

    printf("The sum of an Array: %d\n", sum);

}
