#include<iostream>
using namespace std;

int even(int n){
    int win_teams=n;
    int loose_teams=0;
    int m=0;
    while (win_teams>=1||loose_teams>=1)
    {
        m=m+win_teams/2;
        m=m+loose_teams/2;
        loose_teams=(loose_teams+win_teams)/2;
        win_teams=win_teams/2;
           
    }
    return (m+1);
    
}

int main(){
    int n;
    cout<<"Enter the number of teams:";
    cin>>n;
    if (n%2==0)
    {
        int m=even(n);
        cout<<m;
    }
    else
    {
        int t= even(n)+2;
        cout<<t;
    }
    return 0;
}