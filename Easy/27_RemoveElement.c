int removeElement(int* nums, int numsSize, int val) {
    int k = numsSize-1;
    int temp;
        for(int i = numsSize-1; i>=0; i--){
            if(nums[i] == val){
                temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                k--;
            }else if(nums[k]==val){
                k--;
            }
    }
    k++;
    return k;
}