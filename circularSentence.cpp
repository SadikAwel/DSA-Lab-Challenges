// LeetCode 2460 - Check if Circular Sentence
// Checks if the given sentence is circular by comparing the first and last characters 
// of each word and the first character of the first word with the last character of the last word.
class Solution {
public:
    bool isCircularSentence(string sentence) {
        for (int i = 0; i < sentence.size(); i++){
            if(sentence[i] == ' '){
                if(sentence[i-1] != sentence[i+1]){
                    return false;
                }
            }
            if(i + 1 == sentence.size()){
                if(sentence[0] == sentence[sentence.size() - 1]){
                    return true;
                }
            }
        }
        return false;
    }
};