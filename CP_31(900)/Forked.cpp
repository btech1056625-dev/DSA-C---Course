#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int x1,y1;
        cin>>x1>>y1;
        int x2, y2;
        cin>>x2>>y2;
        int n=0;
        int x_max= max(x1,x2);
        int y_max= max(y1,y2);
        int x_min= min(x1,x2);
        int y_min= min(y1,y2);
        for (int i = x_min; i < x_max+1; i++)
        {
            for (int j = y_min; j < y_max+1; j++)
            {

                if (x_max==x_min||y_min==y_max)
                {
                    if ((i+a==x_max)||(j+b==y_max))
                    {
                        if((i-b==x_min)||(j-a==y_min)){
                            if (i==j)
                            {
                                n++;
                            }
                            else
                            {
                                n+=2;
                            }
                        
                        
                        }
                    }
                }

                else
                {
                    if ((i+a==x_max)&&(j+b==y_max))
                    {
                        if((i-b==x_min)&&(j-a==y_min)){
                            if (i==j)
                            {
                                n++;
                            }
                            else
                            {
                                n+=2;
                            }
                        
                        
                        }
                    }
                    
                }
                
                
                
                
            }
            
        }
        cout<<n<<endl;
        
        
        
        
    }

    return 0;
}