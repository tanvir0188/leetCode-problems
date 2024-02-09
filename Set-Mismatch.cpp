class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> tracker(n+1, 0);
        int current = nums[0];
        int missing = 0;
        int duplicate = 0;

        for(int i = 0; i<n; i++)
        {
            tracker[nums[i]]++;
        }

        for(int i = 1; i<tracker.size(); i++)
        {
            if(tracker[i] == 2)
            {
                duplicate = i;
            }
            if(tracker[i]==0)
            {
                missing =i;
            }
        }
        return {duplicate, missing};
    }
};