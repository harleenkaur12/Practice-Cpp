#include<iostream>
using namespace std;
int toh(int n,char source,char helper,char destination,int num){
    static int count=0;
    if(n>0){
        toh(n-1,source,destination,helper,num);
        toh(n-1,helper,source,destination,num);
    }
    if(n==num && destination=='B'){
        count++;
    }
    return count;
}
int main(){
    int numofdisks;
    cin>>numofdisks;
    int m;
    
    return 0;
}