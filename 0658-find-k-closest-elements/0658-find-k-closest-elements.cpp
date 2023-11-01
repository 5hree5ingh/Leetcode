class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> a;
        int start=0,end=arr.size()-1;
        while((end+1-start)>k){
            if((x-arr[start])>abs(x-arr[end])){start++;}
            else{end--;}
        }
        for(;start<=end;start++){
            a.push_back(arr[start]);
        }
        return a;
    
        
    }
};