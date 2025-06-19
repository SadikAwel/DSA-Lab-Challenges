class Solution {
public:
   
    
    void reverseString(vector<char>& s) {
      int l = 0, r = s.size() - 1;
      char a;
      char b;
    for(int i = 0; i < s.size()/2; i++) {
        a = s[l];
        b = s[r];
        s[l] = b;
        s[r] = a;
        l++;
        r--;
        }
    }
}; 