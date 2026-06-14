#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        int n1 , n2;
        std::vector<int> arr ;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        bool f = false;
        for(int i = 0; i<n; i++){
            n1 = arr[i];
            
            for(int j = i+1; j<n; j++){
                n2 = arr[j];
                
                if(n1&n2 == 0){
                    arr.erase(arr.begin()+i);
                    arr.erase(arr.begin()+j);
                    arr.push_back(n1+n2);
                    n = arr.size();
                    if(n==1){
                        cout<<"yes"<<endl;
                        f = true;
                        break;
                    }
                }
            }
        }
        
        if(!f){
            cout<<"no"<<endl;
        }
    }
}
