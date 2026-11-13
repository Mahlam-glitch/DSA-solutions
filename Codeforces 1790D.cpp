#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> a(n);
        vector <int> freq(0);

        for(int i = 0;i<n;i++){
            cin>>a[i];
        }

    sort(a.begin(),a.end());

   int p1=0,p2=0;
   int last_size = -1;
   int last_count = 0;
    int total = 0;


   while(p1<n){
    int current_count = 0;
    int current_size  = 0;

    while(p2<n&&a[p1]==a[p2]){
        p2++;

    }

    current_count = p2-p1;
    current_size = a[p1];


    if(current_size==last_size+1){
        if(current_count>last_count){
            total+=current_count-last_count;
        }
   }else{
    total +=current_count;
   }

   last_count = current_count;
   last_size = current_size;

   p1 = p2;

   
   
}

cout<<total<<endl;

}
return 0;
}
