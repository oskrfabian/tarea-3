
#include<conio.h>
#include <stdio.h>
#include <ctype.h>
// oscar josue diaz fabian  cif : 2018010356
 // vesion final este es el 
int main()
{
            float d;
            float t;
            float v;
             char c ;
            do{   // validando el los datos 
			printf ("\n\n\n programa que calcula la velocidad de la  maquina del tiempo \n\n\n");
            printf("\n\n\n Introduzca distacia en km:");
    scanf("%f",&d);
        c = getche();
	   
    if (d > 0&& d !=isalpha(c) ){
    //	do { /// validando  la horas 
       printf("numero valido digite el tiempo en horas:");
         
       scanf("%f",&t);
        if(t  >=0 && t!= isalpha(c) ){
		 v=d/t;
        printf("la velocidad es km/h %.2f",v);
        break;
		
		}
		else { printf("dato no valido ");
		break;
		}
       
        
    }
    
    else
    {
       printf("\n\n\n dato no valido");
    }
     
       }
       while (d < 0);
      
         
    return 0;
}

