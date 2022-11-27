#include <iostream>
using namespace std;
int main(){
    string frase;
    cin>>frase;
    int cont=0;
    for(char &n:frase){
        if(n=='0'){
            n=' ';
            cont++;
        }
    }
    cout<<frase<<endl;
    cout<<"cont>> "<<cont<<endl;
    return 0;
}