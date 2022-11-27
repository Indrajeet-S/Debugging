#include<bits/stdc++.h>
using namespace std;
// find second largest element from an array

// stress testing 

// user's logic
int findSecondLarge(int arr[], int n){
    sort(arr, arr+n);
    int max = arr[n-1];
    return max;
}

int correctAns(int arr[], int n){
    sort(arr, arr+n); // here array will already sorted since we passed to previous function by reference
    int max=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]==max) continue;
        else{
            max = arr[i];
            break;
        }
    }
    return max;
}

int main() {
    //generating test cases
    srand(time(NULL));

    int t=rand()%3+1; // 1<= T <= 5
    cout<<t<<endl;
    while(t--){
        int n=rand()%7+1; // 1<= n <=100
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i] = rand()%500+1; // 1<= arr[i] <=500 
        }

        if(findSecondLarge!=correctAns){
        // printing the test case on which it is failing 
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
            cout<<"AC";
        }
        cout<<endl;


    }


return 0;
}