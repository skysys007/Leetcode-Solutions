int searchInsert(int* nums, int numsSize, int target) {
    int i;
    for(i = numsSize-1; i>=0; i--){
        if(nums[i] == target){
            return i;
        }else if(target>nums[i]){
            return i+1;
        }else if(i==0){
            return i;
        }
    }
    return i; 
}