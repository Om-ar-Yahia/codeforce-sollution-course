#include <iostream>

using namespace std;

int main()
{
    int h;
    cin>>h;
    for(int i=0;i<=h;i++){
        for(int j=0;j<i;j++){
            cout <<"*";
        }
        cout<<endl;
    }
    return 0;
}
