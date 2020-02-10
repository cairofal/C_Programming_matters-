/*
Universideda Federal de São Carlos - Algoritimos e Progração_2.A2.2. 
Prática de Desenvolvimento : Alocação dinâmica de memória em C. 
Desenvolvido por: Cairo Faleiros de Figueiredo
Date: jul/2014
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 30;

float somaVetor (float soma, int i);
float normalizaVetor (int i, float normalizavet1, normalizavet2); 
	

int main(int argc, char *argv[]) {
	int i;
	float vet1[TAM], vet2[TAM];
	float *vetor;
	float *p;
	
	void lerEscrVet () { //procedimento para ler e escrever os vetores

	printf ("Digite o número de elementos de um vetor");
	scanf ("%f", &vet1);
	printf ("Digite o número de elementos de um outro vetor");
	scanf ("%f", &vet2);
	
    };

	//alocaçãoo de memória
	
	vetor = malloc(vet1[i]*sizeof(float));
	  if (!vetor) {
	  	printf ("Erro de alocaçãoo");
    	};
	  else {
	  	for(i=0; i<TAM; i++){
	  		printf ("%f", vet1[i]);
		  }
	  }
	  
	p = malloc(vet2[i]*sizeof(float));
	  if (!p){
	  	printf ("Erro de alocação");
	  }
	  	 else {
	  	for(i=0; i<TAM; i++){
	  		printf ("%f", vet2[i]);
		  }
	  }
	  
	  // funçãoo que soma os vetores
	 float somaVetor (float soma, int i) {
	 	for (i=0; i<TAM, i++){
	 		soma = vet1[i] +vet2 [i]; 
	 		return soma; 
		 }
	 }
	 
	 //funçãoo para normalizaçãoo dos vetores
	 float normalizaVetor (int i, float normalizavet1, normalizavet2){
	 	 float somavet1, somavet2, denom;
	 	 
	 	   for (i=0; i<TAM;i++){
	 	   	somavet1 = vet1[i +1]; 
	 	   	denom = sqrt (somavet1)
	 	   	  normalizavet1 = vet1[i]/denom;
	 	   	  return normalizavet1;
			}
		      for (i=0; i<TAM;i++){
	 	   	  somavet2 = vet1[i +1]; 
	 	   	   denom = sqrt (somavet2)
	 	   	    normalizavet2 = vet2[i]/denom;
	 	   	     return normalizavet2;
	 }
	
	free (vetor);
	free (p);
	
	return 0;
}
