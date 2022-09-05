class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]{0};
        int index{1};
        
        for(auto c: s){
            if(arr[c-97]!=0)
                arr[c-97] = -1;
            else
                arr[c-97] = index;
            index++;
        }
        
        int min{INT_MAX};
        for(auto i: arr)
            if(i>0 and i<min)
                min = i;
        if(min==INT_MAX) return -1;
        return min-1;
    }
};