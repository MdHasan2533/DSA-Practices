class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int start = 0;
        int mid = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            if (nums[mid] == 0)
            {
                swap(nums[start], nums[mid]);
                start++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                // swap(nums[mid], nums[end]);
                mid++;
            }
            else
            {
                swap(nums[mid], nums[end]);
                end--;
            }
        }
    }
};