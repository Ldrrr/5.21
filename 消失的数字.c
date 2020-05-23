int missingNumber(int* nums, int numsSize)
{
    int s=numsSize*(1+numsSize)/2;
    for(int i=0;i<numsSize;i++)
    {
        s-=nums[i];
    }
    return s;
}
