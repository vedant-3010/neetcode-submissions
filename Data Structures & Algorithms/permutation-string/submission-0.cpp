class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int i = 0;
        unordered_map<char, int> need;
        unordered_map<char, int> window;

        if(s1.size()> s2.size()) return false;

        for(char c : s1) {
            need[c]++;
        }

        for(int j; j<s2.size();j++){

            window[s2[j]]++;

            if (j - i + 1 > s1.length()) {
                 window[s2[i]]--;

                if (window[s2[i]] == 0) {
                    window.erase(s2[i]);
                }

                i++;
            }
            if(window == need){
                return true;
            }
        }
        return false;
    }
};
