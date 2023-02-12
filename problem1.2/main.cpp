#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your numbers \n" << endl;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b+c==d||a-b-c==d||a*b*c==d){
        cout<<"yes";
    }else{
    cout<<"no";
    }




    return 0;
}
