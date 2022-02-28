#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
	ofstream myfile ("Boletim De Urna.txt");
	
	int vt, vt1, vt2, vtn;

	(myfile.is_open)();
	myfile << "Software Iniciado\n";
	
	system ("color e1");
	
	do{
	system ("cls");
	printf ("\nUrna Eletronica - Compilacao: 2.0.1 - 2017\n\nSeu Voto: ");
	myfile << "Pronto Para Receber Votos\n\n";
	cin>>vt;
	
	if (vt == 1)
	{
		vt1++;
		myfile<<"Voto Para Fulano\n\n";
	}
	
	else if (vt == 2)
	{
		vt2++;
		myfile<<"Voto Para Ciclano\n\n";
	}
	
	else if (vt == 123)
	{
		printf ("\nVotacao Encerrada!!!\n\n");
		myfile<<"Votação Encerrada\n";
		myfile<< fclose;
		system ("pause");
		system ("cls");
		cout<<"\nBoletim De Urna:\n\nVotos Para Fulano: "<<vt1;
		cout<<"\nVotos Para Ciclano: "<<vt2;
		
		if (vt1>vt2) printf ("\n\nFulano Ganhou As Eleicoes!!!\n\n\n");
		if (vt2>vt1) printf ("\n\nCiclano Ganhou As Eleicoes!!!\n\n\n");
		system ("pause");
		return 0;
	}
	
	else if (vt >= 3)
	{
		vtn++;
		myfile<<"Voto Nulo\n\n";
	}
	
	else if (vt <= 0)
	{
		vtn++;
		myfile<<"Voto Nulo\n\n";
	}
	
	
	}while(1 == 1);
}
