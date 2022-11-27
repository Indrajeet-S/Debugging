#include<bits/stdc++.h>
using namespace std;

int main() {

// Understand how to generate test cases
// constraints 
// 1<= t <=3
// 1<= n <=5
// 1<= a[i] <=9

// rand()%7 -> {0,1,2,3,4,5,6}
// rand()%7 + 1 -> {1,2,3,4,5,6,7}
srand(time(NULL));

int t = rand()%3+1;
cout<<t<<endl;
while(t--){
    int n = rand()%5+1;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<(rand()%9+1)<<" ";
    }
    cout<<endl;
}

return 0;
}