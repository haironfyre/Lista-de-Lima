#include <iostream>

#include <stdlib.h>

#include <math.h>


using namespace std;

int *V, n, maior=0, menor=999999999;

int *GeraVetor(int tam, int *vetor){
    vetor = (int*)malloc(tam*sizeof(int));
    return vetor;
}
    
int *EntraVetor(int tam, int *vetor){
    for(int j=0; j<tam; j++){
        cout << "Digite o valor da posição: "<< j+1 << ": ";
        cin >> vetor[j];
        }
        return vetor;
    }   

void MostraVetor(int tam, int *vetor){
    cout << "Imprimindo o vetor com " << tam << " posicoes" << endl << endl;
    for(int j=0; j<tam; j++){
    if (j==0) cout <<"V=[" << vetor[j] << ","; else
        if(j<n-1) cout << vetor[j] << ","; else
            cout << vetor[j] << "]" << endl;
    	}
	}
	
void MaiorMenor(int tam, int *vetor){
	for (int i=0; i<tam; i++){
		if(vetor[i]>maior){
			maior=vetor[i];
		}
		if(vetor[i]<menor){
			menor=vetor[i];
		}
	}
	cout<< "O maior eh: "<< maior << endl;
	cout<< "O menor eh: "<< menor << endl;
}
	
	
	
    
int main(){
    cout << "Qual o tamanho do vetor? ";
    cin >> n;
    
    V =GeraVetor(n,V);
    V =EntraVetor(n,V);
    MostraVetor(n,V);
    MaiorMenor(n,V);
    free(V);
    return 0;
}
