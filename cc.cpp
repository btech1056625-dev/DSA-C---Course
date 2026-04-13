#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPrime(int n){
    if(n%2 != 0){
        if(n == 2 || n==3 || n==5 || n==7){
            return true;
        }
        
        else if(n%2 != 0 && n%3 != 0 && n%5 != 0 && n%7 != 0){
            return true;
        }

        else if(n==1 || n==0){
            return false;
        }

        return false;
    }
}   
int minOperations(vector<int>& nums) {
    int ops = 0;
    int i = 0;
    while(i < nums.size()){
        if(isPrime(nums[i])){
            i+=2;
            continue;
        }
        else{
            int n = nums[i];
            while(n!=0){
                n++;
                if(isPrime(n)){
                    ops++;
                    n = 0;
                    i+=2;
                }
                else{
                    ops++;
                    continue;
                }
            }
        }
        i+=2;
    }
    
    int j = 1;
    while(j < nums.size()){
        if(isPrime(nums[j])){
            if(nums[j] == 2){
                ops+=2;
            }
            else{
                int n = nums[j];
                while(n != 0){
                    n++;
                    if(isPrime(n)){
                        ops++;
                        j+=2;
                         n =0;
                    }
                    else{
                        ops++;
                        continue;
                    }
                }
            }
        }
        else{
            j+=2;
            continue;
        }
        j+=2;
    }
    return ops;
 
}

int main(){
    vector<int> v = {1,2,3,4};
    int ans = minOperations(v);
    cout<<ans<<endl;
    return 0;
}