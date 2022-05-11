class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int lo=0,mid=0,hi=nums.size()-1;
        while(mid<=hi)
        {
            switch(nums[mid])
            {
                case 0: 
                    swap(nums[lo++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[hi--]);
                    break;
            }
        }
    }
};