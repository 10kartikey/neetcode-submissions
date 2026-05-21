class Solution {
public:
    bool isAnagram(string s, string t) {
        // // Approach 1: sorting compare
        // if(s.length() != t.length()){
        //     return false;
        // }

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // return s==t;

        // using hashmap we can have freq and then compare both maps

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> countS;
        unordered_map<char,int> countT;
        for(int i=0;i<s.length();i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS == countT;
    }
};
