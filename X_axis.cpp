#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int arr[3];
int result;

while(n--){

for(int i=0;i<3;i++){
cin>>arr[i];
}

int c = sizeof(arr) / sizeof(arr[0]);
sort(arr,arr+c);

result=(abs(arr[0]-arr[1])+abs(arr[1]-arr[1])+abs(arr[2]-arr[1]));


cout<<result<<endl;


}
return 0;
}


