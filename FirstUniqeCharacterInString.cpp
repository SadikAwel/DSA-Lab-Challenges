class Solution {
public:
    int firstUniqChar(string s) {
        int z;
        for(int i=0; s.size()>i; i++){
            z=0;
            for(int j=0; s.size()>j; j++){
                
                if( s[i]!=s[j]){
                    z++;
                    }
                if(i!=j && s[i]==s[j]){break;}
                
                }if(z==s.size() - 1){
                        return i;
            
            }
        }

return -1;}};