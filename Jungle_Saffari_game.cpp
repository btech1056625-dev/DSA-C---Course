#include<iostream>
using namespace std;


int forward( int i){
    int ans=0;
    if (-2<=i<=2)
    {
        i++;
        ans=i;
        return ans;   
    }
    else
    {
        cout<<"You are the boundary line of the forest."<<endl;
        cout<<"Move either left, right or backward."<<endl;
        return i;
    }
    
    
}

int backward(int j){
    int ans=0;
    if (-2<=j<=2)
    {
        j--;
        ans=j;
        return ans;
    }
    else
    {
        cout<<"You are on the boundary line of the forest."<<endl;
        cout<<"Go in other direction."<<endl;
        return j;
    }
}

int left(int l){
    int ans=0;
    if (-3<=l<=3)
    {
        l--;
        ans=l;
        return ans;   
    }
    else
    {
        cout<<"You are the boundary line of the forest."<<endl;
        cout<<"Go on other directions."<<endl;
        return l;
    }
    
    
}
int right(int m){
    int ans=0;
    if (-3<=m<=3)
    {
        m++;
        ans=m;
        return ans;
    }
    else
    {
        cout<<"You are at the boundary line of the forest."<<endl;
        cout<<"Go for other directions."<<endl;
        return m;
    }
    
    
}

bool treasure_1(int i, int j, int l, int m, int mission ){

    if ((i==1)&&(l==(-3)))
    {
        cout<<"CONGRATS!! You have find the treasure."<<endl;
        mission=mission+1;   
    }
    if(mission>=2){
        cout<<"Bravo!!,you have complete the game."<<endl;
    }
    return true;
}
bool treasure_2(int i, int j, int l, int m, int mission){
    if ((j==(-1))&&(m==3))
    {
        cout<<"CONGRATS!! You have found the treasure."<<endl;
        mission=mission+1;
    }
    if (mission>=2)
    {
        cout<<"Bravo!! You have completed the game."<<endl;
    }
    return true; 

}
int main(){
    int i=0;
    int j=0;
    int l=0;
    int m=0;
    char command;
    int option=0;
    int mission =0;
    string name;
    cout<<"********WELCOME TO JUNGLE SUFFARI********"<<endl;
    cout<<"Please Enter your name:";
    cin>>name;
    cout<<"Hello,"<<name<<"!!!"<<endl;
    cout<<"Select the option from the menu:"<<endl;
    while (true)
    {
        cout<<"1. Start Game"<<endl;
        cout<<"2. Show Instructions"<<endl;
        cout<<"3. Show Command Keys"<<endl;
        cout<<"4. Exit Game"<<endl;
        
        cin>>option;
        if (option==2)
        {
            cout<<"The following instructions for the game are:"<<endl;
            cout<<"# When the game will start you will be present at the centre of the forest. "<<endl;
            cout<<"# There are certain hurdles in the forest (eg. if there is a tree infront of you then you cannot penetrate the tree.) "<<endl;
            cout<<"# There will be two tresures buried into the forest."<<endl;
        }
        if (option==3)
        {
            cout<<"The Command Keys for controlling yourself"<<endl;
            cout<<"* 'w'-----> for moving forward"<<endl;
            cout<<"* 's'-----> for moving backward"<<endl;
            cout<<"* 'a'-----> for moving leftward"<<endl;
            cout<<"* 'd'-----> for moving rightward"<<endl;
        }
        if (option==4)
        {
            break;
        }
        if (option==1)
        {
            cout<<"The game is started now....."<<endl;
            break;
        }
        
    }
    
    while (option==1)
    {
        
        cout<<"Enter the command:";
        cin>>command;
        if (command=='w')
        {
            i=forward(i);
            if (treasure_1(i,j,l,m,mission))
            {
                if (mission==2)
                {
                    break;
                }
                   
            }
            else if (treasure_2(i,j,l,m,mission))
            {
                if (mission==2)
                {
                    break;
                }
                
            }
            
            
        }
        else if (command=='s')
        {
            j=backward(j);
            if (treasure_1(i,j,l,m,mission))
            {
                if (mission==2)
                {
                    break;
                }
                
            }
            else if (treasure_2(i,j,l,m,mission))
            {
                if (mission==2)
                {
                    break;
                }
                
            }
            
            
        }
        else if (command=='a')
        {
            l=left(l);
            if (treasure_1(i,j,l,m,mission))
            {
                if (mission==2)
                {
                    break;
                }
                
            }
            else if (treasure_2(i,j,l,m,mission))
            {
                if (mission==2)
                {
                    break;
                }
                
            }
            
            
        }
        else if (command=='d')
        {
            m=right(m);
            if (treasure_1(i,j,l,m,mission))
            {
                if (mission==2)
                {
                    break;
                }
                
            }
            else if (treasure_2(i,j,l,m,mission))
            {
                if (mission==2)
                {
                    break;
                }
                
            }
            
            
            
        }
        
        
        
        
    }
    
    
    
    
    
        
    

    return 0;
}