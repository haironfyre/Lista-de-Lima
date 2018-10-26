#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int *V, n, x, maior=0,enc=-1, menor=999999999;

int *GeraVetor(int tam, int *vetor){
    vetor=(int*)malloc(tam*sizeof(int));
    return vetor;
}
    
int *EntraVetor(int tam, int *vetor){
    for(int j=0; j<tam; j++){
        cout<<"Digite o valor da posicao: "<<j+1<<": ";
        cin>>vetor[j];
        if (vetor[j]<0){
        	cout<<"Valor invalido. Tente Novamente."<<endl;
        	j--;
		}
    }
        return vetor;
}

void MostraVetor(int tam, int *vetor){
    cout<<"IMPRIMINDO VETOR COM "<<tam<<" POSICOES"<<endl<<endl;
    for(int j=0; j<tam; j++){
    if (j==0) cout<<"V=["<<vetor[j]<<","; else
        if(j<n-1) cout << vetor[j] << ","; else
            cout<<vetor[j]<<"]"<< endl;
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
	cout<<"O maior eh: "<<maior<<endl;
	cout<<"O menor eh: "<<menor<<endl;
}

void Encontrar(int tam, int *vetor){
	for (int i=1; i<tam; i++){
		if (x==vetor[i]){
			enc+=(i+2);
			cout<<"O valor "<<x<<" se encontra na posicao: "<<enc<<endl;
		}
	} 
	if (enc<0){
		cout<<"Valor nao encontrado."<<endl;
	}
}
	
	
	
    
int main(){
    cout <<"Qual o tamanho do vetor? ";
    cin >> n;
    
    V =GeraVetor(n,V);
    V =EntraVetor(n,V);
    MostraVetor(n,V);
    cout<< "Digite o valor que busca: ";
    cin>>x;
    Encontrar(n,V);
    free(V);
    return 0;
}
