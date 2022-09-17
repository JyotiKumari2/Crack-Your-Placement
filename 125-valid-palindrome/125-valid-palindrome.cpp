class Solution {
public:
    bool isPalindrome(string s) {
        string cleans = "";
        for (char& c: s) {
            if (c >= 'A' && c <= 'Z') {
                cleans.push_back(c + 'a' - 'A');
            }
            else if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                cleans.push_back(c);
            }
        }
        int n = cleans.size();
        for (int i = 0; i < n / 2; i++) {
            if (cleans[i] != cleans[n - 1 - i])
                return false;
        }
        return true;
    }
};