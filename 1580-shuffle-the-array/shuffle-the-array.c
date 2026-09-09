

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// int* shuffle(int* nums, int numsSize, int n, int* returnSize){

// }
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));

    int j = 0;

    for (int i = 0; i < n; i++) {
        result[j] = nums[i];
        j++;

        result[j] = nums[i + n];
        j++;
    }

    *returnSize = numsSize;

    return result;
}