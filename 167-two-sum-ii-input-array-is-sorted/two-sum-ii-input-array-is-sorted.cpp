class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0; i<nums.size() ; i++)
        {       int find=target-nums[i];
                if(map.find(find)!=map.end())
                {
                    return vector<int>{map[find]+1, i+1};
                }
                else
                {
                    map[nums[i]]=i;
                }
        }
        return std::vector<int>();
    }
};