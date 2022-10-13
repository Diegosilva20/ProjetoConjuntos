#ifndef CONJUNTO_H
#define CONJUNTO_H
#include <QString>
namespace ejm {
class Conjunto
{
    //Atributos
private:
    int tamanho;
    int indiceOcupacao;
    int *array;
public:
    Conjunto(int tamanho);
    ~Conjunto();
    int getTamanho() const;
    QString getConjunto() const;
    bool buscar(int elemento) const;
    void incluirElemento(int elemento);
    Conjunto * uniao(Conjunto const * const pointer);
    Conjunto * interseccao(Conjunto const * const pointer);
    Conjunto * diferenca(Conjunto const * const pointer);
};

}
#endif // CONJUNTO_H
