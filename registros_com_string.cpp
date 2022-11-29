#include <iostream>
using namespace std;
class ALUNO{
    private:
        char *nome=NULL;
        int tam=0;
    public:
    ALUNO(int nome, string frase){
        this ->nome=new char[nome];
        if(tam<nome){
            tam=nome;
        }
        for(int i=0;i<nome;i++){
            this-> nome[i]=frase[i];
        }
    }
    int get_TAMANHO(){
        return tam;
    }
    void get_char_nome(){
        for(int i=0;i<tam;i++){
            cout<<this->nome[i];
        }
    }
};
int main(){
    int get_tam_arq=0;
    system("clear");
    string nome;
    //cin>>nome;
    getline(cin, nome);
    ALUNO aluno(nome.size(), nome);
    if(aluno.get_TAMANHO()>get_tam_arq){
        get_tam_arq=aluno.get_TAMANHO();
    }
    cout<<" O tamanho máximo atual é de>> "<<aluno.get_TAMANHO()<<endl;
    cout<<" O nome no vet char é>> ";aluno.get_char_nome();cout<<endl;
    cout<<" tam do arq>> ";
    cout<<get_tam_arq<<endl;


    getline(cin, nome);
ALUNO aluno2(nome.size(), nome);
    if(aluno2.get_TAMANHO()>get_tam_arq){
        get_tam_arq=aluno2.get_TAMANHO();
    }
    cout<<" O tamanho máximo atual é de>> "<<aluno2.get_TAMANHO()<<endl;
    cout<<" O nome no vet char é>> ";aluno2.get_char_nome();cout<<endl;
    cout<<" tam do arq>> ";
    cout<<get_tam_arq<<endl;
    return 0;
}