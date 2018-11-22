#include "Indice.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include "IsChars.h"
#include <stdexcept>
using std::string;
using std::list;
using std::cout;
using std::endl;
using std::ifstream;
Indice::Indice()
{
    Ler_Arquivo();
    Entra_Com_Palavra();
    Armazena_Nome_Arquivo_Q_Contem();
    Imprime_Arquivos_Q_Contem();
}

void Indice::Ler_Arquivo(){
            ifstream arq;
            arquivos[0] = "hamlet.txt";
            arquivos[1] =  "kinglear.txt";
            arquivos[2] =  "othello.txt";
            arquivos[3] =  "macbeth.txt";
            arquivos[4] =  "romeoandjuliet.txt";

        for( int i = 0; i < 5; i++ ) {

                arq.open(arquivos[i].c_str(), std::ios::in);
                    try{
                    if(arq.good()){

                        while(!arq.eof()){
                                //As palavras do arquivo são armazenas  na string palavra
                            arq >> palavra;

                            //Converte as palavras pra minúsculo
                            transform( palavra.begin(), palavra.end(), palavra.begin(), tolower );

                            //Apaga os caracteres indesejados nas palavras
                            palavra.erase(remove_if(palavra.begin(), palavra.end(), IsChars(",.;-:'?][")), palavra.end());
                            lista_arquivo[i].push_front(palavra);




                            //continue;//Pula pra próxima iteração por que já encontrou a palavra

                            palavra.clear();
                        }

                       // std::cout <<Palavra_buscar <<std::endl;




                        arq.close();
                    }
                    else
                        throw arquivos[i];
                }

                catch(string arquivos){
                    std::cout <<"Arquivo " <<arquivos <<" nao esta na pasta do projeto\n" <<endl;
                   // std::cout <<"Verifique se esse(s) arquivo(s) estao na pasta do projeto\n" <<endl;
                }

}
}
void Indice::Entra_Com_Palavra(){
         std::cout <<"Entre com o nome da palavra a ser pesquisada no Indice" <<std::endl;

            std::cin >>Palavra_buscar;

                transform( Palavra_buscar.begin(), Palavra_buscar.end(), Palavra_buscar.begin(), tolower );
                Palavra_buscar.erase(std::remove_if(Palavra_buscar.begin(), Palavra_buscar.end(), IsChars(",.;-:'?][")), Palavra_buscar.end());
}
void Indice::Armazena_Nome_Arquivo_Q_Contem(){

              for(int i = 0; i<5;i++){
                for (std::list<std::string>::iterator it=lista_arquivo[i].begin(); it != lista_arquivo[i].end(); ++it)

                    if ((Palavra_buscar).compare(*it) == 0){
                      arq_q_contem.push_front(arquivos[i]);
                      break;//Se a palavra for encontrada pela  comparação da linha de cima, o break vai pro for externo e  muda de lista
    }
}
}

void Indice::Imprime_Arquivos_Q_Contem(){
        if(arq_q_contem.size() != 0){
        std::cout <<"A palavra esta contida em:" <<std::endl;
         for (std::list<std::string>::iterator it=arq_q_contem.begin(); it != arq_q_contem.end(); ++it)
         {
             std::cout << (*it) <<std::endl;
         }
         }
         else
         {
             std::cout << " A palavra nao esta presente em nenhum arquivo"<<std::endl;
         }
}



Indice::~Indice()
{

    //dtor
}
