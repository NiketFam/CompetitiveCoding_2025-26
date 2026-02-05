#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=3){ // when out array have 3 or less than 3 then it will not composite that's why its return -1
            cout<< -1<<endl;
            continue;
        }
        vector<int> res;
        /*
Even + Even = Even(composite, divisible by 2)
Odd + Odd = Even (composite, divisible by 2)
Even + Odd = Odd (might be prime! ⚠️)
        */
        for(int i=2;i<=n;i+=2){ // we are adding even number 
            res.push_back(i);
        }
        for(int i=1;i<=n;i+=2){
            res.push_back(i);
        }
        for(int i=0;i<n;i++){
            cout<<res[i];
            if(i<n-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
 if(i<n-1)
 Loop Index (i),result[i],Condition: if (i < n - 1),What is Printed?
0,2,True (0 < 5),2  (Number + space)
1,4,True (1 < 5),4  (Number + space)
2,6,True (2 < 5),6  (Number + space)
3,1,True (3 < 5),1  (Number + space)
4,3,True (4 < 5),3  (Number + space)
5,5,False (5 is not < 5),5 (Number only!)
*/