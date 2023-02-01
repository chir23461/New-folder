// In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long long int arr[10];
    int n, i;
    scanf("%d", &n);
    long long int sum;
    sum = 0;
    for (i = 0; i < n; i++)
        scanf("%lli", &arr[i]);
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%lli", sum);
    return 0;
}