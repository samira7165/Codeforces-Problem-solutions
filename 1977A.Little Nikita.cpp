#include<iostream>
using namespace std;


int main(){

int n;
cin>>n;
int x,m;

while(n--){
cin>>x>>m;
if(x>=m&&(x-m)%2==0)
{
     cout<<"YES"<<endl;
}
else{

     cout<<"NO"<<endl;
}
}


return 0;
}
