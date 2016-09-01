#include <fstream>
#include "NovaImagem.hpp"

NovaImagem::NovaImagem() {
  setImagem("");
  setTamanhoTotal(0);
	setTamanhoImg(0);
	setNumMagico("");
	setLargura(0);
	setAltura(0);
  //metodo construtor ultilizando metodos acessores da classe principal.

}
NovaImagem::~NovaImagem(){

}
void NovaImagem::CopiaImagem() {
  string nome = "";

  cout <<"Insira um nome para o arquivo copiado: ";
  cin >> nome;
  cout << endl;

  ofstream nova_imagem;
  nova_imagem.open(nome.c_str());
  for (int i = 0; i < getTamanhoTotal(); i++) {
    nova_imagem << getImagem()[i];
  }

  nova_imagem.close();

}
