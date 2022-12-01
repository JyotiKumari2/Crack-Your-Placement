class Solution {
public:
  int lengthOfLongestSubstring(string s) {
	int maxlen = 0;
	unordered_set<char>f;
	int left = 0, right = 0;
	while (right < s.size() && left <= right) {
		if (f.count(s[right] - 97)) {
			f.erase(s[left++] - 97);
		} else {
			f.insert(s[right++] - 97);
			maxlen = max(right - left, maxlen);
		}
	}
	return maxlen;
}
};