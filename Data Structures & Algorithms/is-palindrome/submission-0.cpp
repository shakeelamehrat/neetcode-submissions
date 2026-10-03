class Solution {
public:
    bool isPalindrome(string s) {
        string newString;
        for(auto c: s){
            if(isalnum(c)){
                newString+= tolower(c);
            }
        }
        string originalString= newString;
        reverse(newString.begin(), newString.end());
        return newString== originalString;
    }
};
