#include<iostream>
using namespace std;

int calc(){

    int a,b;
    char c;
    cout<<"enter 1st no."<<endl;
    cin>>a;
    cout<<"enter 2nd no."<<endl;
    cin>>b;
    cout<<"enter symbol(+ - * /)."<<endl;
    cin>>c;
    if(c=='+'){
        cout<<a+b<<endl;
    }
    else if(c=='-'){
        cout<<a-b<<endl;
    }
    else if(c=='*'){
        cout<<a*b<<endl;
    }
    else if(c=='/'){
        cout<<a/b<<endl;
    }
    else{
        cout<<"nothing"<<endl;
    }

    int d;
    cout<<"For Repeat click 1<ENTER>,"<<endl;
    cin>>d;
    if(d==1){
        calc();
    }

    return 0;
}
int main(){
    calc();
    return 0;
}