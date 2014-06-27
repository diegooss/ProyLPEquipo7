#include <fstream>
#include <iostream>
#include <conio>

void MostrarArchivo ()
{
 char caracter;
   ifstream ne("C:/Users/FDG/Documents/GitHub/ProyLPEquipo7/archivo/nombre_evento.txt",ios::in);
   while(!ne.eof())
   {
   	ne.get(caracter);
      cout<<caracter;
      }

   ne.close();
}

