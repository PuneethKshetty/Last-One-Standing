
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
