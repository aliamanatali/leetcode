class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //     if(k>0)
    //     {
    //         int temp = 0, size = 0, count = 0;
    //         size = nums.size()-1;
    //         while(count<k)
    //         {
    //         temp = nums[size];
    //         for(int i = size-1; i>=0; i--)
    //         {
    //             swap(nums[i], nums[i+1]);
    //         }
    //         count++;
    //         }
    //     }
    // }
    int size = nums.size();
    if(k>0 && size>1)
    {
        k%=size;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
    }
};