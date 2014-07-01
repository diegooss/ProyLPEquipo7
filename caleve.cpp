#include<stdio.h>
#include<conio.h>   2
#include<iostream.h>
#include<dos.h>
#include<nuearchi.h>
#include<struceve.h>
#include<visarch.h>

void EscribirEventoArchivo (CalendarioGrupo7 n)
{
ofstream mi_archivo("C:/Users/FDG/Documents/GitHub/ProyLPEquipo7/archivo/nombre_evento.txt",ios::app);
mi_archivo<<endl<<"-"<<n.ne<<"-"<<"\t"<<"-"<<n.de<<"-"<<"\t"<<n.fi.da_year<<"\t"<<n.fi.da_mon<<"\t"<<n.fi.da_day<<"\t"<<n.hi.ti_hour<<"\t"<<n.hi.ti_min;
mi_archivo<<"\n";
mi_archivo.close();
}

main ()
{
   cout<< "----------Calendario Grupo 7----------\n";
   cout<< "\n";

	CreacionArchivo ();


   int op;

   do
	{
		cout<< "1.-Ingresar nuevo evento. \n";
		cout<< "2.-Ver mis eventos para hoy. \n";
		cout<< "3.-Ver mis eventos para toda la semana. \n";
		cout<< "4.-Salir. \n";
		cin>>op;

	switch (op)
	{
		case 1:
      {
         struct CalendarioGrupo7 NuevoEvento;
   	   cout<<"Nombre corto del evento \n";
       	gets(NuevoEvento.ne);
			cout<<"Descripcion del evento \n";
       	gets(NuevoEvento.de);

         cout<<endl;
         cout<<"Ingrese la fecha de inicio: \n";

         cout<<"Ingrese el anio: \n";
         cin>> NuevoEvento.fi.da_year;
         cout<<"Ingrese el mes: \n";
         cin>> NuevoEvento.fi.da_mon;
         cout<<"Ingrese el dia: \n";
         cin>> NuevoEvento.fi.da_day;
         cout<<endl;
         cout<<"Ingrese la fecha de fin: \n";

         cout<<"Ingrese el anio: \n";
         cin>> NuevoEvento.ff.da_year;
         cout<< "Ingrese el mes: \n";
         cin>> NuevoEvento.ff.da_mon;
         cout<< "Ingrese el dia: \n";
         cin>> NuevoEvento.ff.da_day;
         cout<<"ingrese la hora inicial del evento: \n";
         cout<<"Ingrese la hora: \n";
         cin>> NuevoEvento.hi.ti_hour;
         cout<< "Ingrese los minutos: \n";
         cin>> NuevoEvento.hi.ti_min;
         cout<< "Ingrese la hora final del vento: \n";
         cout<< "Ingrese la hora : \n";
         cin>> NuevoEvento.hf.ti_hour;
         cout<< "Ingrese los miutos : \n";
         cin>> NuevoEvento.hf.ti_min;
         EscribirEventoArchivo(NuevoEvento);

         break;
      }
      case 2:
      {
      	struct date mifecha;
         getdate(&mifecha);
         cout<<"Fecha del sistema: "<<mifecha.da_year<<" "<<(char)mifecha.da_mon<<" "<<(int)mifecha.da_day;
           MostrarArchivo ();
           break;
      }
	}
}while (op != 4);
getch ();
}

