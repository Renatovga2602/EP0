#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "ImagemPPM.hpp"

using namespace std;
//contrutor padrão
ImagemPPM::ImagemPPM() {
	imagem = "";
	num_magico = "";
	nivel_cor = 0;
	tamanho_total = 0;
	tamanho_img = 0;
	largura = 0;
	altura = 0;


}
ImagemPPM::~ImagemPPM() {
//metodo destrutor
}
string ImagemPPM::getImagem() {
	return imagem;
}
void ImagemPPM::setImagem(string imagem) {
	this-> imagem = imagem;
}
string ImagemPPM::getNumMagico() {
        return num_magico;
}
void ImagemPPM::setNumMagico(string num_magico) {
        this-> num_magico = num_magico;
}
int ImagemPPM::getNivelCor() {
        return nivel_cor;
}
void ImagemPPM::setNivelCor(int nivel_cor) {
        this-> nivel_cor = nivel_cor;
}
int ImagemPPM::getTamanhoTotal() {
        return tamanho_total;
}
void ImagemPPM::setTamanhoTotal(int tamanho_total) {
        this-> tamanho_total = tamanho_total;
}
int ImagemPPM::getTamanhoImg() {
        return tamanho_img;
}
void ImagemPPM::setTamanhoImg(int tamanho_img) {
        this-> tamanho_img = tamanho_img;
}
int ImagemPPM::getLargura() {
        return largura;
}
void ImagemPPM::setLargura(int largura) {
        this-> largura = largura;
}
int ImagemPPM::getAltura() {
        return altura;
}
void ImagemPPM::setAltura(int altura) {
        this-> altura = altura;
}//neste ponto a função guarda as informações da imagem aberta em forma de caracteres.
void ImagemPPM::AbrirImagem() {
	string imagem = "";
	string endereco = "";
	int contador = 0;

	cout << "Insira o endereço da imagem a ser copiada: ";
	cin >> endereco;
	cout << endl;

	ifstream inFile;
	inFile.open(endereco.c_str());

	if (inFile.fail()) {
	cerr << "O arquivo não foi encontrado" << endl;
	exit(1);
	}

	while (!inFile.eof()) {
		imagem+= inFile.get();
		contador++;

	}


	cout << contador << endl;
	this-> imagem = imagem;
	tamanho_total = contador;

}//neste ponto os dados do cabeçalho são extraidos.
void ImagemPPM::ExtrairAtributos() {
	string num_magico;
	string largura;
	string altura;
	string nivel_cor;
	int contador = 0;
	int tamanho_img = 0;

	for (int i = 0; i < tamanho_total; i++) {
		if ((imagem[i] == '\n') || (imagem[i] == ' ')) {
			contador++;
		}

		if ((imagem[i] != '\n') && (contador == 0)) {
			num_magico += imagem[i];
		} else

		 if (contador == 2) {
			largura += imagem[i];
		} else

		if (contador == 3) {
			altura += imagem[i];
		} else

		if (contador == 4) {
			nivel_cor += imagem[i];
		} else

		if (imagem[i] == 5) {
			break;
		}

	}

	tamanho_img = atoi(largura.c_str())*atoi(altura.c_str());
	this-> num_magico = num_magico;
	this-> largura = atoi(largura.c_str());
  this-> altura = atoi(altura.c_str());
	this-> tamanho_img = tamanho_img;
  this-> nivel_cor = atoi(nivel_cor.c_str());
}
