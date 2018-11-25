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
        void LerArquivo();
        void EntraComPalavra();
        void ArmazenaNomeArquivoQContem();
        void ImprimeArquivosQContem();

    private:

                list <string> lista_arquivo[5], arq_q_contem;
                string palavra;
                string PalavraBuscar;
                string arquivos[5];



};

#endif // INDICE_H
