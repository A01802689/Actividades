#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> numeros;
    for(int i=0; i<10;i++){
        numeros.push_back(i);
    }
    vector<int>::iterator i;
    for(i=numeros.begin(); i<numeros.end();i++){
        cout<<(*i)<<" ";
    }
    cout<<endl;
    return 0;
}