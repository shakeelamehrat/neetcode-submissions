class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size()==0) return "";
        string length= to_string(strs[0].size());
        string encoded= length+ ',';
        for(int i=1; i<strs.size(); i++){
            length= to_string(strs[i].size());
            encoded+=length +',';
        }
        encoded+='#';
        for(int i=0; i<strs.size(); i++){
            encoded+=strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        if(s.size()==0) return {};
        vector<int> sizes;
        vector<string> result;
        int i=0;
        while(s[i]!='#'){
            int j=i;
            while(s[j]!=','){
                j++;
            }
            sizes.push_back(stoi(s.substr(i, j-i)));
            i= j+1;
        }
        i++;
        for(auto sz: sizes){
            result.push_back(s.substr(i, sz));
            i+= sz;
        }
        return result;
    }
};
