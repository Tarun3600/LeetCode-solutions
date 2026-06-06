class Solution {
public:
    int reverse(int x) {
        bool flag = true;
        if(x < 0) flag = false;
        string s = to_string(x);;
        std::reverse(s.begin(),s.end());
        long long res = stoll(s);
        if(!flag) res = 0 - res;
        if(res > INT_MAX || res < INT_MIN) return 0;
        return static_cast<int>(res);
        
    }
};