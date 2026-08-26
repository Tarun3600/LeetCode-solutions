class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        string window = "";
        string result = "";

        int start = 0;
        int length = INT_MAX;

        for (int i = 0; i < s.size(); i++) {

            window = s.substr(start, i - start + 1);
            int ones = std::count(window.begin(), window.end(), '1');

            if (ones > k) {

                while (ones > k) {

                    start++;

                    window = s.substr(start, i - start + 1);
                    ones = std::count(window.begin(), window.end(), '1');
                }
            }

            if (ones == k) {

                while (window[0] == '0') {
                    start++;
                    window = s.substr(start, i - start + 1);
                }

                if (window.size() < length) {
                    result = window;
                    length = window.size();
                }
                else if (window.size() == length && window < result) {
                    result = window;
                }
            }
        }

        return result;
    }
};