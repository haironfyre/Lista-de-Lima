#include <iostream>
#include <stdlib.h>

using namespace std;

int **M, linha, coluna;

int **gerarMatriz(int linha, int coluna, int **matriz){
	matriz = (int**)malloc(linha*sizeof(int));
	for(int j=0; j<coluna; j++){
		matriz[j] = (int*)malloc(coluna*sizeof(int));
	}
return matriz;
}

int **preencherMatriz(int linha, int coluna, int **matriz){
	int valor;
	for(int i=0; i < linha; i++){
		for(int j=0; j<coluna;j++){
			cout << "M[" << i+1 << j+1 << "]: ";
			cin >> valor;
			if(valor > 0){
				matriz[i][j] = valor;
			}else{
				cout << "valor invalido, digite outro." << endl;
				j--;
			}
		}
	}
return matriz;
}

void mostraMatriz(int linha, int coluna, int **matriz){
	for(int i=0; i<linha;i++){
		cout << "[";
		for(int j=0; j<coluna; j++){
			if(j < coluna-1){
				cout << matriz[i][j] << ", ";
			}else{
				cout << matriz[i][j];
			}
		}
	cout << "]" << endl;
	}
}


void liberaMatriz(int linha, int coluna, int **matriz){
	for(int i=0; i<linha; i++){
		free(matriz[i]);
	}
    free(matriz);
}

void MaiorM(int linha, int col, int **matriz){
	int maior=matriz[0][0], i1=0, i2=0;
	for (int i=0; i<linha; i++)
		for (int j=0; j<col; j++){
			if(matriz[i][j]>maior){
				maior=matriz[i][j];
				i1=i;
				i2=j;
			}
		}
		cout<<"Maior elemento eh: "<<maior<<endl;
		cout<<"Indice: ["<<i1+1<<"]["<<i2+1<<"]"<<endl;
}

/*int trp(int linha, int col, int **matriz){
	for (int i=0; i<linha;i++)
		for (int j=0; j<n; j++){
			matriz[i][j]=matriz[j][i]
		}
}*/

void mostratrp(int linha, int coluna, int **matriz){
	for(int i=0; i<linha;i++){
		cout << "[";
		for(int j=0; j<coluna; j++){
			if(j < coluna-1){
				cout << matriz[j][i] << ", ";
			}else{
				cout << matriz[j][i];
			}
		}
	cout << "]" << endl;
	}
}

int main(){
	cout << "Digite o numero de linhas e colunas da matriz: ";
	cin >> linha >> coluna;
	M = gerarMatriz(linha, coluna, M);
	M = preencherMatriz(linha, coluna, M);
	mostraMatriz(linha, coluna, M);
	MaiorM(linha,coluna,M);
	mostratrp(linha,coluna,M);
	liberaMatriz(linha, coluna, M);
	
return 0;
}
