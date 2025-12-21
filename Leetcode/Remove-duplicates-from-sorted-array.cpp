class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
           int n = nums.size();
           if(n == 0) { return 0;}
           int k = 1;
           for(int i = 1; i < nums.size();i++)
           {
                if(nums[i] != nums[k-1])
                {
                    nums[k] = nums[i];
                    k++;
                }
           }
           return k;
        }
};

#set solution
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int ans = 0;
        for(auto i:st)
        {
            nums[ans++] = i;
        }
        return ans;

    }
# Multiple occurrence
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
           int n = nums.size();
           if(n <= 2) { return n;}
           int k = 2;
           for(int i = 2; i < nums.size() - 2;i++)
           {
                if(nums[i] != nums[k-2])
                {
                    nums[k] = nums[i];
                    k++;
                }
           }
           return k;
        }
};


