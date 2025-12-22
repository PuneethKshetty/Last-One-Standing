class Solution { // Time complexity : 0(nk) and same space complexity]
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto s : strs)
        {
            string hashstring = "";
            vector<int> freq(26,0);
            for(auto& ch : s)
            {
                freq[ch - 'a']++;
            }
            for(int i = 0; i < 26; i++)
            {
                hashstring.push_back(freq[i]);
                // hashstring.push_back('#');
            }
            mp[hashstring].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto& [key,vectorOfStrings] : mp)
        {
            ans.push_back(vectorOfStrings);
        }
        return ans;
    }
};


class Solution { // nklogk 
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(int i = 0;i < strs.size();i++)
        {
            string s = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(s);
        }

        for(auto [key,vectorOfStrings] : mp)
        {
            ans.push_back(vectorOfStrings);
        }
        return ans;
    }
};

