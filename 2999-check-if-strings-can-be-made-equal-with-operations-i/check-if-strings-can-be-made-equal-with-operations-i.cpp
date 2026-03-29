class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string t = "";

        t = s1;
        if (t == s2) return true;

        // case 2: swap (0,2)
        t = "";
        t += s1[2];
        t += s1[1];
        t += s1[0];
        t += s1[3];
        if (t == s2) return true;

        // case 3: swap (1,3)
        t = "";
        t += s1[0];
        t += s1[3];
        t += s1[2];
        t += s1[1];
        if (t == s2) return true;

        // case 4: swap both
        t = "";
        t += s1[2];
        t += s1[3];
        t += s1[0];
        t += s1[1];
        if (t == s2) return true;

        return false;
    }
};