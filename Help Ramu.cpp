/*Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.

Public transport is not free. There are 4 types of tickets:

A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;
A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;
A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;
A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.

Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int c1,c2,c3,c4;
        cin>>c1>>c2>>c3>>c4;
        int n,m;
        cin>>n>>m;
        int a[n];
        int ans_usingrick=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans_usingrick=ans_usingrick+min(c1*a[i],c2);
        }
        ans_usingrick=min(ans_usingrick,c3);
        int b[m];
        int ans_usingcab=0;
        for(int i=0;i<m;i++){
            cin>>b[i];
            ans_usingcab=ans_usingcab+min(b[i]*c1,c2);
        }
        ans_usingcab=min(ans_usingcab,c3);
        int total_ans=ans_usingcab+ans_usingrick;
        total_ans=min(total_ans,c4);
        cout<<total_ans<<endl;
    }
    return 0;
}
