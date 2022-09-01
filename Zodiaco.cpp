#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<fstream>

using namespace std;
char opcion;
int zodiaco;
int main(){
	
    	int mes, dia;
		char mes1[1000], dia1[1000];
		
		cout<<"\t\t\t\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*|"<<endl;
    	cout<<"\t\t\t\t\t\t|                       |"<<endl;
     	cout<<"\t\t\t\t\t\t|         Zodiaco       |"<<endl;
        cout<<"\t\t\t\t\t\t|                       |"<<endl;
        cout<<"\t\t\t\t\t\t|*-*-*-*-*-*-*-*-*-*-*-*|"<<endl<<endl;

		cout<<"\t\t\t\t\t\t| 1=(Enero)   \t6=(Junio)   \t11=(Noviembre)|"<<endl;
    	cout<<"\t\t\t\t\t\t| 2=(Febrero) \t7=(Julio)   \t12=(Diciembre)|"<<endl;
     	cout<<"\t\t\t\t\t\t| 3=(Marzo)   \t8=(Agosto)                  "<<endl;
        cout<<"\t\t\t\t\t\t| 4=(Abril)   \t9=(Septiembre)              "<<endl;
        cout<<"\t\t\t\t\t\t| 5=(Mayo)    \t10=(Octubre)                "<<endl<<endl;
		
		cout <<"\nIngrese el mes:";
		cin.getline(mes1, 100);
		
		mes = atoi(mes1);
		
		for (int i=0; i<strlen(mes1); i++)
	{
		while (isalpha(mes1[i])&& !isspace(mes1[i]))
		{
			system("cls");
			return main();
		}
	}
		
		if(mes>12){
					
		cout<<"\nError, introduzca un valor valido"<<endl;
				
			system("cls");
			return main();		
			
		}
		
		
		cout <<"\nIngrese el dia:";
		cin.getline(dia1, 100);
		
		dia = atoi(dia1);
	  	
		for (int i=0; i<strlen(dia1); i++)
	{
		while (isalpha(dia1[i])&& !isspace(dia1[i]))
		{
			
			system("cls");
			return main();
			
		}
	}
		
	
		if (dia >31){
			cout<<"\nError, introduzca un valor valido"<<endl;
				
			system("cls");
			return main();	
			
		}
		
		  while(mes > 12 || mes < 1 || dia < 1 || dia > 31);

		//Cada signo del zodiaco

		//Aries

		if(mes == 3 && dia >=21 || mes==4 && dia <=20)
		{
		cout << "\nSu signo es Aries" <<endl<<endl;
		}

        //Tauro

		if(mes == 4 && dia >=21 || mes==5 && dia <= 20)
		{
		cout <<"\nSu signo es Tauro" <<endl<<endl;
		}

        //Geminis

		if(mes == 5 && dia >=21 || mes==6 && dia <= 21)
		{
		cout <<"\nSu signo es Geminis" <<endl<<endl;
		}

		//Cancer

		if(mes == 6 && dia >=22 || mes==7 && dia <= 22)
		{
		cout <<"\nSu signo es Cancer" <<endl<<endl;
		}

        //Leo

		if(mes == 7 && dia >=23 || mes==8 && dia <= 23)
		{
		cout <<"\nSu signo es Leo" <<endl<<endl;
		}

		//Virgo

		if(mes == 8 && dia >=24 || mes==9 && dia <= 23)
		{
		cout <<"\nSu signo es Virgo" <<endl<<endl;
		}

		//Libra

    	if(mes == 9 && dia >=24 || mes==10 && dia <= 22)
		{
		cout <<"\nSu signo es Libra" <<endl<<endl;
		}

		//Escorpio
		
    	if(mes == 10 && dia >=23 || mes==11 && dia <= 22)
		{
		cout <<"\nSu signo es Escorpio" <<endl<<endl;
		}

		//Sagitario

    	if(mes == 11 && dia >=23 || mes==12 && dia <= 21)
		{
		cout <<"\nSu signo es Sagitario" <<endl<<endl;
		}

		//Capricornio

    	if(mes == 12 && dia >=22 || mes==1 && dia <= 19)
		{
		cout <<"\nSu signo es Capricornio" <<endl<<endl;
		}

		//Acuario

		if(mes == 1 && dia >=20 || mes==2 && dia <= 19)
		{
		cout <<"\nSu signo es Acuario" <<endl<<endl;
		}

		//Piscis

		if(mes == 2 && dia >=20 || mes==3 && dia <= 20)
		{
		cout <<"\nSu signo es Piscis" <<endl<<endl;
		}
		
		cout << "Desea salir del programa? S/N: ";
     	cin>>opcion;

     	if ((opcion=='n') || (opcion=='N')){
	 	system("cls");
	 	return main();
     	}

     	else if ((opcion=='s') || (opcion=='S')){
	 	char s;
	 	cout << "\nSeguro de que deseas salir? S/N: ";
	 	cin>>s;
	 	if ((s=='s') || (s=='S')){
	 	exit (1);
	 	}

	 	else if ((s=='n') || (s=='N')){
	 	system("cls");
	 	return main();
		}
}

}


