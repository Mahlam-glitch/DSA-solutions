#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& a, int target) {

    unordered_map <int,int> m;


    for(int i = 0;i<a.size();i++){
        int first = a[i];
        if(m.find(target-first)!=m.end()){
            return {i,m[target-first]};
        }else{
            m[first]=i;
        }
    }

    return {};
}
