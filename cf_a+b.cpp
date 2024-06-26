#include<iostream>
using namespace std;

int main(){

int a,b,n;
cin>>n;
char op;
int result;

while(n--){

cin>>a;
cin>>op;
cin>>b;


switch(op){
    case '+':
        result = a+b;
        break;
}

cout<<result<<endl;



}
return 0;
}

