class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int prefixsum = 0;
        unordered_map<int,int> prefixsumCount;
        
        //base case
        prefixsumCount[0] = 1;

        for(int i = 0;i < nums.size();i++)
        {
            prefixsum = prefixsum + nums[i];

            int remove = prefixsum - k;

            if(prefixsumCount.find(remove) != prefixsumCount.end())
            {
                count += prefixsumCount[remove];
            }

            prefixsumCount[prefixsum]++;

        }
        return count;

    }
};
