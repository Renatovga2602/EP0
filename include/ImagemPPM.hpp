#ifndef IMAGEMPPM_HPP
#define IMAGEMPPM_HPP
#include <iostream>
#include <string>

using namespace std;
//classe principal
class ImagemPPM {
private:
    int nivel_cor;
    int tamanho_total;
    int tamanho_img;
    int largura;
    int altura;
    string imagem;
    string num_magico;

public:
  ImagemPPM(); //contrutor.
  ~ImagemPPM(); //destrutor.
//metodos acessores.

  string getImagem();
  void setImagem(string imagem);

  string getNumMagico();
  void setNumMagico(string num_magico);

  int getNivelCor();
  void setNivelCor(int nivel_cor);

  int getTamanhoTotal();
  void setTamanhoTotal(int tamanho_total);

  int getTamanhoImg();
  void setTamanhoImg(int tamanho_img);

  int getLargura();
  void setLargura(int largura);

  int getAltura();
  void setAltura(int Altura);

  void AbrirImagem();
  void ExtrairAtributos();//funções que abrem a imagem e extrai os dados do cabeçalho.

}; 
#endif
