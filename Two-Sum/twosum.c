/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){    
    int i;
    int j;
    *returnSize = 2;
    int* arr = malloc(sizeof(int) * 2);

    for(i = 0; i < numsSize; i++)
        for(j = i + 1; j < numsSize; j++)
            if(nums[j] == target - nums[i])
            {
                arr[0] = i;
                arr[1] = j;
                return arr;                
            }
    // Return [-1,-1] if no result
    printf("No result with specified target\n");
    arr[0] = -1;
    arr[1] = -1;
    return arr;
}
