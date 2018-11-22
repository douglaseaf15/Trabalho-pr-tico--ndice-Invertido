#ifndef INDICE_H
#define INDICE_H
#include <string>
#include <list>
using std::string;
using std::list;
class Indice
{
    public:
        Indice();
        ~Indice();
        void Ler_Arquivo();
        void Entra_Com_Palavra();
        void Armazena_Nome_Arquivo_Q_Contem();
        void Imprime_Arquivos_Q_Contem();

    private:

                list <string> lista_arquivo[5], arq_q_contem;
                string palavra;
                string Palavra_buscar;
                string arquivos[5];



};

#endif // INDICE_H
