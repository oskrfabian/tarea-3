#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <windows.h>
main ()
{

int d;
  float v;
   float i;
   float resistencia ;
   float voltaje ;
   float intensidad;
   float potencia ;
   float r;
   char C;
   printf("oscar josue diaz fabian  ");
   printf("cif 2018010356  ");
   Sleep(2000);
   system("CLS"); 

printf("digite las opciones ");
printf("\n\n\n");
printf("(1) resistencia");
printf("\n\n\n");
printf("(2) voltaje");
printf("\n\n\n");
printf("(3) intencidad");
printf("\n\n\n");
printf("(4) potencia ");
printf("\n\n\n");
   scanf("%i",&d);

do{

        if (d==1 ){
		
            printf("resistencia");
            
		printf("ingrese voltaje:");
            
            scanf ("%f",&v);
		printf("ingrese intensidad:");
			scanf ("%f",&i);
            resistencia = v * i;
            printf("la resistencia es = %.f", resistencia);
          break;
      }
      else printf("opcion no corresponde");
          break;
        if (d == 2){
		
            printf("voltaje");
            printf("ingrese resistencia:");
            scanf ("%f",&r);
           printf("ingrese intensidad");
            scanf ("%f",&i);
           
            voltaje = r * i;
            printf("el voltaje es = %.f", voltaje);
          break;}
          else printf("opcion no corresponde");
          break;
        if (d == 3){
		
            printf("intensidad");
            printf("ingrese voltaje:");
            scanf ("%f",&v);
           printf("ingrese resistencia:");
            scanf ("%f",&r);
            
            intensidad = v / r;
            printf("la resistencia es = %.f",intensidad);
            break;}
            else printf("opcion no corresponde");
            break;
        if (d== 4){
		
            printf("potencia");
            printf("ingrese voltage:");
            scanf ("%f",&v);
           printf("ingrese intencidad:");
            scanf ("%f",&i);
           
            potencia = v * i;
            printf("la potencia es = %.f", potencia);
           break;
           }
           else printf("opcion no corresponde");
           break;
        if (d == 0)
        
            break;
        else
		
            printf("opcion no corresponde");
        
      
         
   
        }
		while(d!=0);
        return 0;
}
