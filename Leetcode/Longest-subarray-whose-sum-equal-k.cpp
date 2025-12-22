#include<bits/stdc++.h>
#include<climits>
#include<numeric>
#include<algorithm>
class Solution {
  public:
int longestSubarray(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    int prefixsum = 0;
    int best = 0;

    mp[0] = -1; // handle prefix itself equals k

    for (int i = 0; i < arr.size(); ++i) {
        prefixsum += arr[i];

        if (mp.find(prefixsum - k) != mp.end()) {
            int len = i - mp[prefixsum - k];
            best = max(best, len);
        }

        if (mp.find(prefixsum) == mp.end()) {
            mp[prefixsum] = i; // store earliest occurrence
        }
    }
    return best;

    }
};

#next solution for positive no:
0(n)
int longestSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    int left = 0;
    long long sum = 0;
    int best = 0;

    for (int right = 0; right < n; ++right) {
        sum += arr[right];

        while (left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }

        if (sum == k) {
            best = max(best, right - left + 1);
        }
    }
    return best;
}
