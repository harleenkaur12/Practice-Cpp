// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int result=min(n1,n2);
//     while(result>0){
//         if(n1%result==0 && n2%result==0){
//             break;
//         }
//         result--;
//     }
//     cout<<result;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int result=min(a,b);
    while(result>0){
        if(a%result==0 && b%result==0){
            break;
        }
        result--;
    }
    cout<<result;
    return 0;
}