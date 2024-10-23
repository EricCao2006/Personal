#include<stdio.h>
#include<stdlib.h>
#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))
int compar(const void *a, const void *b)
    {
    return (*(int *)a - *(int *)b);
    }
int main(void)
    {
    int nums[3];
    int i=0;
    for(i = 0; i < ARRAY_LENGTH(nums); i++) 
        {
        scanf("%d", &nums[i]);
        }
    qsort(nums, ARRAY_LENGTH(nums), sizeof(nums[0]), compar);
    for(i = 0; i < (ARRAY_LENGTH(nums)-1); i++) 
        {
        printf("%d ", nums[i]);
        }
    printf("%d",nums[i]);
    return 0;
    }