// Returns a vector with the sizes of partitions such that each letter appears in at most one
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int maxValue = 0;
        int rule = -1;
        int j;
        vector<int>list;
        for (int i = 0;i<s.size(); i++){
            for(j = s.size()-1;  0 < j; j-- ){
                if(s[i] == s[j] && maxValue  <= j ){
                    maxValue = j;
                    break;
                }
        }
        if(maxValue == i){
            list.push_back(maxValue - rule);
            rule = maxValue ;
            maxValue == 0;
        }
    
}
return list;}
};