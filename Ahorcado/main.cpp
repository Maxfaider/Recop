#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;

void inicio_juego();
void verificacion_de_Palabra(char *p, int n, int a);

void pista(int a){
     
     switch(a){
               
     case 1: cout<<"Pais Donde se hizo el mundial de futbol 2010."<<endl; break;          
     case 2: cout<<"Es la ciencia que se ocupa del estudio de los cuerpos celestes del universo."<<endl; break;
     case 3: cout<<"Religion que se sige por la Fe y cree en dios"<<endl; break;
     case 4: cout<<"Animal volador con habitos nocturnos y duerme con la cabeza abajo."<<endl; break;
     case 5: cout<<"Nombre del protagonista de Assassins Creed saga."<<endl; break;
     }
   
}     
     
       
void Diseno_menu(){
   system("color f0");  
   cout<<"\t\t\t============================"<<"| |"<<endl;
   cout<<"\t\t\t|   Ahorcado               |"<<"| |"<<endl;
   cout<<"\t\t\t|                          |"<<"| |"<<endl;
   cout<<"\t\t\t|    [1]Nuevo Juego        |"<<"| |"<<endl;
   cout<<"\t\t\t|    [2]Instruciones       |"<<"| |"<<endl;
   cout<<"\t\t\t|    [3]Salir              |"<<"| |"<<endl;
   cout<<"\t\t\t============================"<<"| |"<<endl;
   
}

void simulacion(){
   int cont=0;
   
     
  do{
   system("cls");
   
   cout<<"Cargando Datos";
   for(int i=0; i<3; i++){
   cout<<".";
   Sleep(100);}
   
   cont++;
   
  }while(cont!=6);
   
}           
    
int main(int argc, char *argv[])
{
    int option;
    
    for(;;){
    system("cls");        
    Diseno_menu();
    
    cout<<"Seleccione la opcion: ";
    cin>>option;
    
    switch(option){
                   
    case 1: inicio_juego(); break;
    
    case 3: return 0;
    
    }
    
    }               
       
    system("PAUSE");
    return EXIT_SUCCESS;
}

void inicio_juego(){
     
   simulacion();
   
   int pal[5];
   int choice;
   int ne[5];
   char p1[10]="SUBAFRICA"; ne[0]=9; pal[0]=1;
   char p2[11]="ASTRONOMIA"; ne[1]=10; pal[1]=2;
   char p3[9]="CATOLICA"; ne[2]=8; pal[2]=3;
   char p4[11]="MURCIELAGO"; ne[3]=10; pal[3]=4;
   char p5[13]="DESMONDMILES"; ne[4]=12; pal[4]=5;
   
 
   
   srand(time(NULL));
   choice=1+rand()%5;
   
   switch(choice){
       
       case 1: verificacion_de_Palabra(p1,ne[0],pal[0]); break;
       case 2: verificacion_de_Palabra(p2,ne[1],pal[1]); break;            
       case 3: verificacion_de_Palabra(p3,ne[2],pal[2]); break; 
       case 4: verificacion_de_Palabra(p4,ne[3],pal[3]); break; 
       case 5: verificacion_de_Palabra(p5,ne[4],pal[4]); break; 
   }                  
   
}

void verificacion_de_Palabra(char *p, int n, int a){
     
      char nom[n];
      int cont[n];
      int num=10,num2;
      int flag,flag2=0;
      char tecla;
      
      for(int i=0; i<n; i++){
      cont[i]=0;}
      
      for(;;){
       flag=1;      
      system("cls");
     
      cout<<" =================="<<endl;
      cout<<"|Inserte la palabra|"<<endl;
      cout<<" =================="<<endl<<endl;;
      cout<<"\t\t\t"<<" Intentos restantes: "<<num<<endl;
      cout<<"\t\t\t"<<" Presione 1 para ver Pista"<<endl;
      cout<<"\t\t\t"<<" Presione 2 para escribir la palabra completa"<<endl;
      
      for(int i=0; i<n; i++){
      if(cont[i]==0 && flag2!=1){
        cout<<" _";}
        
      if(cont[i]==1 || flag2==1){
      cout<<" "<<p[i];}             
                                                               
      }
      cout<<endl<<endl;       
      cout<<"--> ";
      if(num2==n){
       cout<<"EnHorabuena haz ganado"<<endl;
       cout<<"  partida terminada  "<<endl;
       system("pause");
       return;}
       num2=0;           
       
      tecla=getch();
      
      if(tecla==49){
          pista(a);
          system("pause");} 
          
      if(tecla==50){
          cout<<"Digite La palabra: ";
          cin>>nom;
          
          for(int i=0; i<n; i++){
          if(nom[i]==p[i]){
          num2++;}
          }
          if(num2==n){
             cout<<"Palabra Correcta"<<endl; 
             flag2=1;}
                      
          
      }                        
                                 
      
     if(tecla>=97 && tecla<=122){
          tecla=tecla-32;}          
      
      for(int i=0; i<n; i++){
      if(tecla==p[i]){
        cont[i]=1;
        flag=0;}
      }
      
      if(flag==1 && tecla!=49 && flag2!=1){
       cout<<"Intente de Nuevo"<<endl;
       Sleep(250);           
         num--;
       if(num==0){           
       cout<<"Haz agotado los intentos"<<endl;
       cout<<"Volviendo al menu principal"<<endl;
       system("pause");
       return;}           
       }
       
       for(int i=0; i<n; i++){
       if(cont[i]==1){
           num2++;}
       }                       
              
      
      
      
      } 
      
      
      
                 
}      
      
      
      
      
      
      
      
      
      
      

     

