/*Este programa hace el calculo de la CURP sin homoclave sin embargo aun tiene algunas cosas que no se consideraron estrictamente como algunas acepciones estipuladas en la pagina del diario oficial de la federación*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char l1(char *apellido);
char l2(char *apellido);
char l3(char *apellido2);
char l4(char *nombre);
char l5(char *fecha);
char l6(char *sexo);
char l7(char lista);
char l8(char *estado);
char l9(char *apellido);
char l10(char *apellido2);
char l11(char *nombre);
char curp[16]={};
void main(void)

{
char apellido[15];
char apellido2[15];
char nombre[15];
char fecha[12];
char sexo[1];
char estado[3];
char lista;
char p1[300];
int i=0;
printf("Para calcular su CURP ingrese todos los datos en MAYÚSCULAS\n");
printf("Inserte el primer apellido\n");
	scanf("%s",apellido);
        curp[0]=l1(apellido);
	curp[1]=l2(apellido);
	printf("Inserte el segundo apellido\n");
	scanf("%s,",apellido2);
	curp[2]=l3(apellido2);
	printf("Ingresa tu primer nombre, en caso de que sea José o Maria inserta el segundo nombre\n");
	scanf("%s",nombre);
        curp[3]=l4(nombre);
        printf("introduce tu fecha de nacimiento con el formato YYYY-MM-DD\n");
        scanf("%s",fecha);	
	curp[4]=l5(fecha);
        curp[5]=l5(fecha);
	curp[6]=l5(fecha);
	curp[7]=l5(fecha);
	curp[8]=l5(fecha);
	curp[9]=l5(fecha);
	printf("Ingrese su sexo en el formato H para hombre y M para mujer\n");
	scanf("%s",sexo);
	curp[10]=l6(sexo);
	l7(lista);
	printf("Ingrese aqui\n");
	scanf("%s",estado);
	
	curp[11]=l8(estado);
        curp[12]=l8(estado);
	curp[13]=l9(apellido);
	curp[14]=l10(apellido2);
	curp[15]=l11(nombre);
        //printf("l10=%c\n",curp[14]);

	printf("La curp es:%s\n",curp);


}
//PRIMERA LETRA DEL APELLIDO PATERNO
char l1(char *apellido)
{       
	return (apellido[0]);
}
//PRIMERA VOCAL DEL APELLIDO PATERNO
char l2(char *apellido)
{   
	int i=1;
         while(apellido[i]!='\0')
        {  if(apellido[i]=='A'||apellido[i]=='E'||apellido[i]=='I'||apellido[i]=='O'||apellido[i]=='U')
		{
		break;
		}
	i++;
        }
return (apellido[i]);	 

}

//PRIMERA LETRA DEL SEGUNDO APELLIDO
char l3(char *apellido2)
{
     return (apellido2[0]);
}

//NOMBRE
char l4(char *nombre)
{
   return (nombre[0]);
}

//FECHA

char l5(char *fecha)
{    char l5,l6;
     curp[4]=fecha[2];
     curp[5]=fecha[3];
     curp[6]=fecha[5];
     curp[7]=fecha[6];
     curp[8]=fecha[8];
     curp[9]=fecha[9];
     return(curp[4],curp[5],curp[6],curp[7],curp[8],curp[9]);
}
//sexo
char l6(char *sexo)
{ 
       while(sexo[0]!='H'&&sexo[0]!='M') 
       { printf("Sexo no válido\nInserte de nuevo\n");
	   scanf("%s",sexo);}
 if(sexo[0]=='H'||sexo[0]=='M')
	{ 
		curp[10]=sexo[0];     
	}
  return(curp[10]);
}
//Clave de estado

char l7(char lista)
{
	printf("De la siguiente lista de estados digite la clave de su estado de origen, ejemplo\n Jalisco entonces teclee JC\n");
        printf(
	"1. AGUASCALIENTES------->AS\n"
	"2. BAJA CALIFORNIA------>BC\n"
	"3. BAJA CALIFORNIA SUR-->BS\n"
        "4. CAMPECHE------------->CC\n"
	"5. CHIAPAS-------------->CS\n"
	"6. CHIHUAHUA------------>CH\n"
	"7. COAHUILA------------->CL\n"
	"8. COLIMA--------------->CM\n"
        "9. DISTRITO FEDERAL----->DF\n"
        "10. DURANGO------------->DG\n"
        "11. GUANAJUATO---------->GT\n"
        "12. GUERRERO------------>GR\n"
        "13. HIDALGO------------->HG\n"
        "14. JALISCO------------->JC\n"
        "15. MÉXICO-------------->MC\n"
        "16. MICHOACAN----------->MN\n"
        "17. MORELOS------------->MS\n"
        "18. NAYARIT------------->NT\n"
        "19. NUEVO LEÓN---------->NL\n"
        "20. OAXACA-------------->OC\n"
        "21. PUEBLA-------------->PL\n"
        "22. QUERÉTARO----------->QT\n"
        "23. QUINTANA ROO-------->DF\n"
        "24. SAN LUIS POTOSÍ----->SP\n"
        "25. SINALOA------------->SL\n"
        "26. SONORA-------------->SR\n"
        "27. TABASCO------------->TC\n"
        "28. TAMAULIPAS---------->TS\n"
        "29. TLAXCALA------------>TL\n"
        "30. VERACRUZ------------>VZ\n"
        "31. YUCATAN------------->YN\n"
        "32. ZACATECAS----------->ZS\n");
	
}
char l8(char *estado)
{       
   if(estado[0]=='A'&&estado[1]=='S'|| estado[0]=='B'&&estado[1]=='C'||estado[0]=='B'&&estado[1]=='S' ||estado[0]=='C'&&estado[1]=='C'||estado[0]=='C'&&estado[1]=='S'|| estado[0]=='C'&&estado[1]=='H'||estado[0]=='C'&&estado[1]=='L'||estado[0]=='C'&&estado[1]=='M'||estado[0]=='D'&&estado[1]=='F'||estado[0]=='D'&&estado[1]=='G'||estado[0]=='G'&&estado[1]=='T'||estado[0]=='G'&&estado[1]=='R'||estado[0]=='H'&&estado[1]=='G'||estado[0]=='J'&&estado[1]=='C'||estado[0]=='M'&&estado[1]=='C'||estado[0]=='M'&&estado[1]=='N'||estado[0]=='M'&&estado[1]=='S'||estado[0]=='N'&&estado[1]=='T'||estado[0]=='N'&&estado[1]=='L'||estado[0]=='O'&&estado[1]=='C'||estado[0]=='P'&&estado[1]=='L'||estado[0]=='Q'&&estado[1]=='T'||estado[0]=='Q'&&estado[1]=='R'||estado[0]=='S'&&estado[1]=='P'||estado[0]=='S'&&estado[1]=='L'||estado[0]=='S'&&estado[1]=='R'||estado[0]=='T'&&estado[1]=='C'||estado[0]=='T'&&estado[1]=='S'||estado[0]=='T'&&estado[1]=='L'||estado[0]=='V'&&estado[1]=='Z'||estado[0]=='Y'&&estado[1]=='N')
	     {
    curp[11]=estado[0];
    curp[12]=estado[1];
    }
   else
   {
	   printf("Codigo no válido\nInserte de nuevo\n");
	   scanf("%s",estado);
   }


  
   
    return(curp[11],curp[12]);
}
//PRIMERA CONSONANTE INTERNA 1ER APELLIDO
char l9(char *apellido)
{ int i=1;
  while(apellido[i]!='\0')
  { if(apellido[i]!='A'&&apellido[i]!='E'&&apellido[i]!='I'&&apellido[i]!='O'&&apellido[i]!='U')
	  {
		  break;
	  }
  i++;
  }
  return(apellido[i]);
}
//PRIMERA CONSONANTE INTERNA 2DO APELLIDO
char l10(char *apellido2)
{
   int i=1;
   while(apellido2[i]!='\0')
   {
    if (apellido2[i]!='A'&&apellido2[i]!='E'&&apellido2[i]!='I'&&apellido2[i]!='O'&&apellido2[i]!='U')
    {
	    break;
    }
    i++;
   }
   curp[14]=apellido2[i];
   return(curp[14]);
}
//PRIMERA CONSONANTE INTERNA NOMBRE
char l11(char *nombre)
{
   int i=1;
   while(nombre[i]!='\0')
   {
    if (nombre[i]!='A'&&nombre[i]!='E'&&nombre[i]!='I'&&nombre[i]!='O'&&nombre[i]!='U')
    {
	    break;
    }
    i++;
   }
   curp[15]=nombre[i];
   return(curp[15]);
  
}
