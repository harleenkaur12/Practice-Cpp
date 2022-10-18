#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int flag=1;
    // for(int i=n;i>0;i--){
    //     for(int j=2;j<i;j++){
    //         if((i%j==0) && (i-2)%j==0){
    //             flag=0;
    //             break;
    //         }
    //         else{
    //             flag=1;
    //         }
    //     }
    //     if(flag){
    //         cout<<i<<" "<<i-2<<endl;
    //         break;
    //     }
    // }

    int n;
    cin>>n;
    vector<int> v;
    for (int i = 2; i <= n; i++)
    {
        // cout<<"a"<<endl;
        bool flag = false;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            // cout<<i<<endl;
            v.push_back(i);
        }
    }
    for (int i = v.size()-1; i > 0; i--)
    {
        if (v[i] - v[i-1] == 2)
        {
            cout<<v[i-1]<<" "<<v[i]<<endl;
            break;
        }
    }
    
    return 0;
}