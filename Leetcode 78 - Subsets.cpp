#include <iostream>

using namespace std;
//backtrack
void allSubsets(vector <int> &arr,vector<int>&ans,int i,vector<vector<int>>&sol){
    if(i==arr.size()){
        sol.push_back({ans});
        return;
   }

    ans.push_back(arr[i]); 
    allSubsets(arr,ans,i+1);
    ans.pop_back();
    allSubsets(arr,ans,i+1);
    
}

vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> ans = {};
        vector <vector<int>> sol = {};
        allSubsets(nums,ans,0,sol);
        return sol;
    }
