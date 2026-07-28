class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> freq;
        for(auto i : s){
            freq[i]++;
        }
        for(auto j:t){
            freq[j]--;
            if(freq[j]<0){
                return false;
            }
        }
        return true;
    }
};
