#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    for(int i=*st.begin();i<=st.size();i++){
        cout<<i<<" ";
    
    }
    return 0;
}