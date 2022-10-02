// You are given a 0-indexed string word, consisting of lowercase English letters. You need to select one index and remove the letter at that index from word so that the frequency of every letter present in word is equal.

// Return true if it is possible to remove one letter so that the frequency of all letters in word are equal, and false otherwise.

// Note:

// The frequency of a letter x is the number of times it occurs in the string.
// You must remove exactly one letter and cannot chose to do nothing.
 

class Solution {
private:
    bool check(vector<int>& counter) {
        int val = *max_element(counter.begin(), counter.end());
        
        for(int i = 0; i < 26; i++)
            if(counter[i] && counter[i] != val)
                return false;
        
        return true;
    }
    
public:
    bool equalFrequency(string word) {
        vector<int> counter(26, 0);
        
        for(auto& ch : word)
            counter[ch - 'a']++;
        
        for(int i = 0; i < 26; i++) {
            if(counter[i]) {
                counter[i]--;
                
                if(check(counter))
                    return true;
                
                counter[i]++;
            }
        }
        
        return false;
    }
}; 