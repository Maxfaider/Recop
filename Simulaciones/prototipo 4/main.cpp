#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>

using namespace std;

void movimiento(int a, int b){
    
    HANDLE move;
    
    move=GetStdHandle(STD_OUTPUT_HANDLE);
    
    COORD pos;
    pos.X=a;
    pos.Y=b;
    
    SetConsoleCursorPosition(move,pos);}
    
void read(); 
int mayor_caracter(char *puna, char *punb);
   

int main(int argc, char *argv[])
{
    int x=15,y=15;
    char move;
    
    for(;;){
            
    movimiento(x,y);cout<<"-A-";
     
    move=getch(); 
    
   if(move=='w'){
       y--;}
   if(move=='s'){
       y++;}
   if(move=='d'){
       x++;}
   if(move=='a'){
       x--;} 
    
   if(move==13){
       break;}                                                                  
    system("cls");
    
    
    }
    
   read(); 
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void read(){
   system("cls");
     
  char m[3][30];
  char aux[30];
  
     
  cout<<"digite 3 palabras: ";
  cin>>m[0];cin>>m[1];cin>>m[2];
  
  for(int i=0; i<3; i++){
  for(int j=0; j<2; j++){
          
  if(mayor_caracter(m[j],m[j+1])==1){
                                             
   strcpy(aux,m[j]);
   
   strcpy(m[j],m[j+1]);
   
   strcpy(m[j+1],aux); } 
   
  } 
  }
   cout<<m[0]<<" ";
   cout<<m[1]<<" ";
   cout<<m[2]<<" ";                           
                              
}

int mayor_caracter(char *puna, char *punb){
     
  if(puna[0]<punb[0]){
   return 0;}
  
   if(puna[0]>punb[0]){
   return 1;}
   
  int cont=1;
  
  do{
      
    if(puna[cont]>punb[cont] && puna[cont-1]==punb[cont-1]){
      return 1;}
      
      cont++;
      
  }while(cont!=3);
  
  return 0;}
  
  
                                  
                                               
 
       


                             
     














