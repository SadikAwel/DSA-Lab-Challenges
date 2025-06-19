// LeetCode Problem: 796. Rotate String
// Difficulty: Easy
// Checks if string 's' can be rotated to match string 'goal'
class Solution {
public:
    bool rotateString(string s, string goal) {
        char first;
        if(s == goal){
            return true;
        }
        for(int i = 0; i < s.size() - 1; i++){
            first = s[0];
            for(int j = 0; j < s.size(); j++){
                if(j == s.size() -1){
                    s[s.size() -1] = first;
                }else{
                s[j] = s[j + 1];}
        }
        if(s == goal){return true;}
        }
        return false;
    }
};