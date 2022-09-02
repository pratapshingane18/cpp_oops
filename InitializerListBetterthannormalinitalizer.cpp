#include<bits/stdc++.h>
using namespace std;

class Test{
    public:
    Test(){
        cout<<"Unparameterized"<<endl;
    }
    Test(int x){
        cout<<"Parameterized"<<endl;
    }
};

class Main{
    Test T;
    public:
    Main(){
        T = Test(10);
    }

};

int main(){
    Main(m);
    return 0;
}