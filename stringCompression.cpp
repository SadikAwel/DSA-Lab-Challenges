//leetcode: https://leetcode.com/problems/string-compression/description/
// LeetCode Problem: 443. String Compression
// Compresses the input string by replacing sequences of the same character with the count (max 9) followed
class Solution {
public:
    string compressedString(string word) {
        char store = word[0];
        int count = 1;
        string words = "";

        for (int i = 1; i <= word.size() ; i++){
            if (word[i] == store && count < 9){
                count++;
                continue;
            }
            string get = to_string(count);
            get = get + word[i-1] ;
            words.append(get);
            count = 1;
            store = word[i];
            

        }
        return words;
    }
};