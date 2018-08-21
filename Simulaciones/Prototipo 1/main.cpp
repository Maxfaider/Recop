#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;
void simulacion();
int main(int argc, char *argv[])
{
    
    simulacion();
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void simulacion(){
     
 char m='=';
 int cont=1;
 do{
     
   system("cls");
   cout<<"Guardando..."<<endl;
   
   for(int i=0; i<=cont; i++){
   cout<<m;}              
  cont++;
  
  cout<<endl;
  
  }while(cont!=20);
  system("cls");
  cout<<"Dato Guardado"<<endl;
  getch();
  
}       
