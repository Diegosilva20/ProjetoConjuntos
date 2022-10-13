#include "conjunto.h"
namespace ejm {
int Conjunto::getTamanho() const
{
    return tamanho;
}
Conjunto::~Conjunto(){
    if(array) delete[] array;
}
Conjunto::Conjunto(int tamanho):
    tamanho(0),
    indiceOcupacao(0),
    array(0)
{
    if(tamanho <= 0 )
        throw QString("Tamanho do Conjunto não pose se <= 0");
    try {
        array = new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc &erro) {
        throw QString("Conjunto não foi criado = faltou espaço");
    }
}
QString Conjunto::getConjunto() const{
    int pos;
    QString saida = "{";
    for(pos = 0; pos < indiceOcupacao - 1; pos++){
        saida += QString::number(*(array+pos)) + " , ";
    }
    saida += QString::number(*(array+pos)) + " } ";
    return saida;
}
bool Conjunto::buscar(int elemento) const{
    for(int pos = 0; pos < indiceOcupacao; pos++){
        if(elemento == *(array+pos)) return true;
    }
    return false;
}
void Conjunto::incluirElemento(int elemento){
    if(indiceOcupacao == tamanho)
       throw QString("Conjunto esta cheio");
    if(buscar(elemento)) throw QString("Elemento já existe");
    *(array+indiceOcupacao) = elemento;
    indiceOcupacao++;
}
    Conjunto * Conjunto::uniao(Conjunto const * const pointer){
        int tam = this->indiceOcupacao + pointer->indiceOcupacao, i, j;
        Conjunto *Cresult = new Conjunto(tam);
        for(i = 0; i < this->indiceOcupacao; i++){
            for(j = 0; j < pointer->indiceOcupacao and *(this->array + i) != *(pointer->array + j); j++);
            if(j == pointer->indiceOcupacao){
                Cresult->incluirElemento(*(this->array + i));
            }
        }
        for(i = 0; i < pointer->indiceOcupacao; i++){
            for(j = 0; j < this->indiceOcupacao and *(this->array + j) != *(pointer->array + i); j++);
            if(j == this->indiceOcupacao){
                Cresult->incluirElemento(*(pointer->array + i));
            }
        }
        for(i = 0; i < this->indiceOcupacao; i++){
            for(j = 0; j < pointer->indiceOcupacao and *(this->array + i) != *(pointer->array + j); j++);
            if(j < pointer->indiceOcupacao){
                // tem nos dois
                Cresult->incluirElemento(*(this->array + i));
            }
        }
        return Cresult;
    }
    Conjunto * Conjunto::interseccao(Conjunto const * const pointer){
        int tam = this->indiceOcupacao + pointer->indiceOcupacao, i, j;
        Conjunto *Cresult = new Conjunto(tam);
        for(i = 0; i < this->indiceOcupacao; i++){
            for(j = 0; j < pointer->indiceOcupacao and *(this->array + i) != *(pointer->array + j); j++);
            if(j < pointer->indiceOcupacao){
                // tem nos dois
                Cresult->incluirElemento(*(this->array + i));
            }
        }
        return Cresult;
    }
    Conjunto * Conjunto::diferenca(Conjunto const * const pointer){
        int tam = this->indiceOcupacao + pointer->indiceOcupacao, i, j;
        Conjunto *Cresult = new Conjunto(tam);
        for(i = 0; i < this->indiceOcupacao; i++){
            for(j = 0; j < pointer->indiceOcupacao and *(this->array + i) != *(pointer->array + j); j++);
            if(j == pointer->indiceOcupacao){
                Cresult->incluirElemento(*(this->array + i));
            }
        }
        return Cresult;
    }
}
