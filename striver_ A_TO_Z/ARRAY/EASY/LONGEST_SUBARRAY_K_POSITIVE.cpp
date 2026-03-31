#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void longest(vector<int> &v, int k) {
    vector<vector<int>> arr;

    for (int i = 0; i < v.size(); i++) {
        int sum = 0;
        for (int j = i; j < v.size(); j++) {
            sum += v[j];

            if (sum == k) {
                vector<int> arr1(v.begin() + i, v.begin() + j + 1);
                arr.push_back(arr1);
                break;
            }
        }
    }

    int size = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (size < arr[i].size()) {
            size = arr[i].size();
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        if (size == arr[i].size()) {
            for (int j = 0; j < size; j++) {
                cout << arr[i][j] << endl;
                

            }
            cout << endl;
            cout<<size<<endl;
        }
        
    }
}

int main() {
    vector<int> v = {10, 5, 2, 7, 1, 9};
    int k;
    cin >> k;
    longest(v, k);

    return 0;
}