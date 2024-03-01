class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;  i < n; i++)
        {
            int remaining = target - nums[i];

            if(umap.find(remaining) != umap.end())
            {
                //we've found the element
                ans.push_back(i);
                ans.push_back(umap[remaining]);

                return ans;
            }

            umap[nums[i]] = i;
        }

        return {-1, -1};
    }
};