#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your age !" << endl;
    int age;
    cin>>age;
    if(age%2==0){
        cout<<"lucky\n";
    }else{
    cout<<"unlucky";
    }
    return 0;
}
