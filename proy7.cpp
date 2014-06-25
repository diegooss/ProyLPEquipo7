#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>

struct CalendarioGrupo7
{
	int op;
	char ne [100], de [100], fe [100], ho[100];
};

/*struct date
{
	int da_year; // año actual (1980-2099)
	char da_day; // dia mes (1-31)
	char da_mon; // mes (1-12)
};  */


main ()
{
	int op;
	struct date fecha;
	getdate(&fecha);
   cout<<fecha.da_year<<" "<<fecha.da_mon<<" "<<fecha.da_day<<endl;
   CalendarioGrupo7 nuevoevento;
   cout<<"Ingrese  el nombre corto del evento:\n ";
   gets(nuevoevento.ne);
   cout<<"Ingrese la descripcion del evento: \n";
   gets(nuevoevento.de);
   cout<<"Ingrese la fecha (dd/mm/aa) \n";
   gets(nuevoevento.fe);
   cout<<"Ingrese la hora (hh/mm) \n";
   gets(nuevoevento.ho);

cout<< "1.-Ingresar nuevo evento. \n";
cout<< "2.-Ver mis eventos para hoy. \n";
cout<< "3.-Ingresar nuevo evento. \n";
cin>>op;

switch (op)
	{
		case 1:
   	   cout<<"Nombre corto del evento \n";
       	cin>>nuevoevento.ne;
       	cout<<"Descripcion del evento \n";
       	cin>>nuevoevento.de;
       	cout<<"Feha / Hora de Inicio \n";
       	cin>>nuevoevento.fe;
	}

getch ();
}


