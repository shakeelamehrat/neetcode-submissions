class Solution {
public:
    string minWindow(string s, string t) {
        int minlen= INT_MAX;
        int sIndex= -1;
        int l=0, r=0;
        int count=0;
        vector<int> hash(256, 0);
        for(int i=0; i<t.size(); i++){
            hash[t[i]]++;
        }
        while(r<s.size()){
            if(hash[s[r]]>0) count++;
            hash[s[r]]--;
            while(count==t.size()){
                if(minlen>r-l+1){
                    minlen= r-l+1;
                    sIndex= l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) count--;
                l++;
            }
            r++;
        }    
            return sIndex==-1? "":s.substr(sIndex, minlen);        
    }
};
