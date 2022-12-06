#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char c;
    cin>>c;
    if(caratteri(c)==true)
        cout<<c<<endl;
    else
        cout<<"errore"<<endl;
    return 0;
