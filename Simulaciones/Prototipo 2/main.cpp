#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

void gotoxy(int a, int b){
     HANDLE mov;
     mov = GetStdHandle(STD_OUTPUT_HANDLE);
     
     COORD pos;
     pos.X=a;
     pos.Y=b;
     SetConsoleCursorPosition(mov,pos);
     }
     

int main(int argc, char *argv[])
{
    int x=10,y=0;
    char movin;
    
    for(;;){
           
      cout<<"colombia"<<endl;
      cout<<"argentina"<<endl;
            
      gotoxy(x,y);cout<<"<--";      
            
        movin=getch();
        
        if(movin=='w'){
       
        Beep(200,300);               
        y--;
         if(y==-1){
             y=1;}      
        }
        if(movin=='s'){
         c
        Beep(200,300);              
        y++;
        if(y==2){
          y=0;}       
        }
        
        if(movin==13){
            if(x==10 && y==0){
             system("cls");        
             cout<<"CCCCCCCCCCCCCCCCCCCC"<<endl;
             cout<<"can"<<endl;
             system("pause");}
             
            if(x==10 && y==1){
             system("cls");        
             cout<<"CCCCCCCCCCCCCCCCCCCC"<<endl;
             cout<<"cat"<<endl;
             system("pause");}
             }                          
                           
          system("cls");  
            }
        
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
