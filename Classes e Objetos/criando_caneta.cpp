#include <iostream>
#include <sstream>
using namespace std;
class CANETA{
    private:
        string marca;
        float tipo;
        string cor;
    public:
        CANETA(string marca, float tipo, string cor){
            this -> marca=marca;
            this -> tipo=tipo;
            this -> cor=cor;
        }
        string listar(){
            stringstream ret;
            string retorno="";
            ret<<tipo;
            retorno="MARCA>> "+marca+'\n'+"TIPO>> "+ret.str()+'\n'+"COR>> "+cor+'\n';
            return retorno;
        }
};
int main(){
    string marca, cor;
    float tipo;
    cin>>marca>>tipo>>cor;
    CANETA *caneta=new CANETA(marca, tipo, cor);
    cout<<caneta[0].listar();
    return 0;
}