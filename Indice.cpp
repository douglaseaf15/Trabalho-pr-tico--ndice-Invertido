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
    LerArquivo();
    EntraComPalavra();
    ArmazenaNomeArquivoQContem();
    ImprimeArquivosQContem();
}

void Indice::LerArquivo(){
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
                            ListaComNomeDosArquivos[i].push_front(palavra);




                            //continue;//Pula pra próxima iteração por que já encontrou a palavra

                            palavra.clear();
                        }

                       // std::cout <<PalavraBuscar <<std::endl;




                        arq.close();
                    }
                    else
                        throw arquivos[i];
                }

                catch(string arquivos){
                    std::cout <<"Arquivo " <<arquivos <<" nao esta na pasta do projeto\n" <<endl;
                }

}
}
void Indice::EntraComPalavra(){
         std::cout <<"Entre com o nome da palavra a ser pesquisada no Indice" <<std::endl;

            std::cin >>PalavraBuscar;

                transform( PalavraBuscar.begin(), PalavraBuscar.end(), PalavraBuscar.begin(), tolower );
                PalavraBuscar.erase(std::remove_if(PalavraBuscar.begin(), PalavraBuscar.end(), IsChars(",.;-:'?][")), PalavraBuscar.end());
}
void Indice::ArmazenaNomeArquivoQContem(){

              for(int i = 0; i<5;i++){
                for (std::list<std::string>::iterator it=ListaComNomeDosArquivos[i].begin(); it != ListaComNomeDosArquivos[i].end(); ++it)

                    if ((PalavraBuscar).compare(*it) == 0){
                         ListaDeArquivosQueContem.push_front(arquivos[i]);
                         break;//Se a palavra for encontrada pela  comparação da linha de cima, o break vai pro for externo e  muda de lista
                    }   
               }
}

void Indice::ImprimeArquivosQContem(){
        if(ListaDeArquivosQueContem.size() != 0){
            ListaDeArquivosQueContem.sort();//Coloca os nomes dos arquivos em ordem alfabética
            std::cout <<"A palavra " <<PalavraBuscar <<std::endl <<"esta contida em:" <<std::endl;
            for (std::list<std::string>::iterator it=ListaDeArquivosQueContem.begin(); it != ListaDeArquivosQueContem.end(); ++it){
                std::cout << (*it) <<std::endl;
            }
        }
        else{
                std::cout << " A palavra "<<PalavraBuscar <<std::endl<<" nao esta presente em nenhum arquivo"<<std::endl;
            }
}



Indice::~Indice()
{

   
}
