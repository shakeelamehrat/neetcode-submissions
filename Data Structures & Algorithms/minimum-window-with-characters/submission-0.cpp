class Solution {
public:
    string minWindow(string s, string t) {
        int minlen= INT_MAX;
        int sIndex= -1;
        for(int i=0; i<s.size(); i++){
            vector<int> hash(256, 0);
            int count=0;
            for(int j=0; j<t.size(); j++){
                hash[t[j]]++;
            }
            for(int j=i; j<s.size(); j++){
                if(hash[s[j]]>0) count++;
                hash[s[j]]--;
                if(count==t.size()){
                    if(minlen>j-i+1){
                        minlen= j-i+1;
                        sIndex= i;
                        break;
                    }
                }
            }
        }
        if(sIndex==-1) return "";
        else return s.substr(sIndex, minlen);
    }
};
