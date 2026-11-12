#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    

    int t;
    cin >> t;

    while (t--) {
    vector <int> i(3);

    for(int j =0;j<3;j++){
        cin>>i[j];
    }
    
    i.reserve(3);

    sort(i.begin(),i.end());
    int round = 0;

    while(i[0]!=i[1]&&i[1]!=i[2]&&i[0]!=i[2]){

    i[0]++;
    i[2]--;
    round++;
     sort(i.begin(),i.end());
    }
cout<<round<<endl;


  
}

return 0;
}
