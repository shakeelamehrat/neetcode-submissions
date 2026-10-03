class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=0;
        int w, h;
        int l= 0, r= heights.size()-1;
        int area;
        while(l<r){
            w= r-l;
            h= min(heights[l], heights[r]);
            area= w*h;
            maxi= max(maxi, area);
            if(heights[l]>heights[r]) r--;
            else l++;
        }
        return maxi;
    }
};
