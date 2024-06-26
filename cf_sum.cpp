#include<iostream>
using namespace std;

int main(){

int c1,c2,c3,n;
cin>>n;


while(n--){

cin>>c1>>c2>>c3;

if(c1+c2==c3 || c1+c3==c2 || c2+c3==c1){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}
   return 0;

}

}
