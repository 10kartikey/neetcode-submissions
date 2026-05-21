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

        // if(s.length() != t.length()){
        //     return false;
        // }

        // unordered_map<char,int> countS;
        // unordered_map<char,int> countT;
        // for(int i=0;i<s.length();i++){
        //     countS[s[i]]++;
        //     countT[t[i]]++;
        // }

        // return countS == countT;


        // use hash table where one array will increase char count
        // and while second string char will be subtracted and at end
        // if the table(array) count for all char is 0 then the 2 strings
        // will be anagram

        if(s.length() != t.length()){
            return false;
        }

        vector<int> count(26,0);
        for(int i=0; i<s.length();i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int val : count){
            if(val != 0)
            return false;
        }
        return true;
    }
};
