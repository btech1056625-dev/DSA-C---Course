#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lowerbound(vector<int> &v , int x){
    int s= 0;
    int e = v.size()-1;
    int mid = s+(e-s)/2;

    int min = -1;
    while(s<=e){
        if(v[mid] >= x){
            if(min == -1){
                min = mid;
            }
            else if(min > mid){
                min = mid;
            }
            s = mid+1;
        }

        else if(v[mid] < x){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return mid;
}



int main(){
    vector<int> v;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }

    int y; cin>>y;

    int ans = lowerbound(v , y);
    cout<<ans<<endl;

    return 0;
}