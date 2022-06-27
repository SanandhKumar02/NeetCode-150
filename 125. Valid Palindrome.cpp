class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ")
            return true;
        vector<char> p;
        int j=0;
        for(int i=0;i<s.length();i++){
            if(iswalnum(s[i]))
                p.push_back(tolower(s[i]));
        }
        
        
        for(int i=0;i<p.size()/2;i++){
            if(p[i]!=p[p.size()-i-1])
                return false;
        }
        
        return true;
        
    }
};