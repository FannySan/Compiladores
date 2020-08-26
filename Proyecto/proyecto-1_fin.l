%{
#include "fin.tab.h"
%}

NUM [0-9]+
NUMN [-][0-9]+
DEC [0-9]*[.][0-9]+
CAD ["][A-Za-z0-9 ]+["]
VAR [a-zA-Z][a-zA-Z0-9]*
IMP [a-zA-Z][a-zA-Z0-9\+-/\*]*[=][a-zA-Z][a-zA-Z0-9\+-/\*]*
%%
"if"           {
		printf("Reservada %s\n",yytext);
		int cont, tam;
                char *a;
                int i, x=0, l=0;
                for(yytext[l]; yytext[l]!= '\0';l++){
                x++;
                }
                tam=x;
                a=(char*)malloc(tam*sizeof(char));
                for(cont=0; cont<tam; cont++){
                    a[cont]=yytext[cont];
                }
                yylval.cadena=a;
                return (IF);
                }
                
"int"           {
		printf("Reservada %s\n",yytext);
		int cont, tam;
                char *a;
                int i, x=0, l=0;
                for(yytext[l]; yytext[l]!= '\0';l++){
                x++;
                }
                tam=x;
                a=(char*)malloc(tam*sizeof(char));
                for(cont=0; cont<tam; cont++){
                    a[cont]=yytext[cont];
                }
                yylval.cadena=a;
                return (INT);
                }
                
"double"           {
		printf("Reservada %s\n",yytext);
		int cont, tam;
                char *a;
                int i, x=0, l=0;
                for(yytext[l]; yytext[l]!= '\0';l++){
                x++;
                }
                tam=x;
                a=(char*)malloc(tam*sizeof(char));
                for(cont=0; cont<tam; cont++){
                    a[cont]=yytext[cont];
                }
                yylval.cadena=a;
                return (DOUBLE);
                }
                
"string"           {
		printf("Reservada %s\n",yytext);
		int cont, tam;
                char *a;
                int i, x=0, l=0;
                for(yytext[l]; yytext[l]!= '\0';l++){
                x++;
                }
                tam=x;
                a=(char*)malloc(tam*sizeof(char));
                for(cont=0; cont<tam; cont++){
                    a[cont]=yytext[cont];
                }
                yylval.cadena=a;
                return (STRING);
                }
                
"mostrar"           {
		printf("\nMostrando\n",yytext);
                return (VACIO);
                }
                

{NUM}|"-"{NUM}        {
		printf("Numero entero %s\n",yytext);
                yylval.entero = atoi(yytext);
                return (ENTERO);
                } 
 
{DEC}|"-"{DEC}           {
		printf("Numero decimal %s\n",yytext);
                yylval.decimal = atof(yytext);
                return (DECIMAL);
                }                

"+"|"-"|"*"|"/" 	{
		printf("Signo op\n");
                return (yytext[0]);

                }
                
"mod" 	{
		printf("funcion\n");
        int cont, tam;
                char *a;
                int i, x=0, l=0;
                for(yytext[l]; yytext[l]!= '\0';l++){
                x++;
                }
                tam=x;
                a=(char*)malloc(tam*sizeof(char));
                for(cont=0; cont<tam; cont++){
                    a[cont]=yytext[cont];
                }
                yylval.cadena=a;
                return (MOD);
                }
"pow" 	{
		printf("funcion\n");
        int cont, tam;
                char *a;
                int i, x=0, l=0;
                for(yytext[l]; yytext[l]!= '\0';l++){
                x++;
                }
                tam=x;
                a=(char*)malloc(tam*sizeof(char));
                for(cont=0; cont<tam; cont++){
                    a[cont]=yytext[cont];
                }
                yylval.cadena=a;
                return (POW);
                }
                

")"		{
    printf("fin parentesis\n");
	return (yytext[0]);
		}
		
"("		{
    printf("inicio parentesis\n");
	return (yytext[0]);
		}

"<"		{
    printf("menor\n");
	return (yytext[0]);
		} 
		
">"		{
    printf("mayor\n");
	return (yytext[0]);
		} 

","		{
    printf("coma\n");
	return (yytext[0]);
		} 
                
{CAD}           {
		printf("Cadena %s\n",yytext);
                int cont, tam;
                char *a;
                int i, x=0, l=0;
                for(yytext[l]; yytext[l]!= '\0';l++){
                x++;
                }
                tam=x;
                a=(char*)malloc(tam*sizeof(char));
                for(cont=1; cont<tam-1; cont++){
                    a[cont-1]=yytext[cont];
                }
                yylval.cadena=a;
                return (CADENA);
                }

{VAR}           {
            printf("Variable %s\n",yytext);
             int cont, tam;
                char *a;
                int i, x=0, l=0;
                for(yytext[l]; yytext[l]!= '\0';l++){
                x++;
                }
                tam=x;
                a=(char*)malloc(tam*sizeof(char));
                for(cont=0; cont<tam; cont++){
                    a[cont]=yytext[cont];
                }
                yylval.cadena=a;
                return (VARIABLE);
                }
                
";"             {
    printf("puntocoma\n");
	return (yytext[0]);
		} 
		
"="            {
    printf("igual\n");
	return (yytext[0]);
		} 

"\n"            {
		//printf("Salto de linea\n\n");
                return (yytext[0]);
                }
"^"      {
    printf("potencia\n");
	return (yytext[0]);
		} 
		
		
{IMP} {
    printf("\ndespedaza\n");
		int cont, tam;
                char *a;
                int i, x=0, l=0;
                for(yytext[l]; yytext[l]!= '\0';l++){
                x++;
                }
                tam=x;
                a=(char*)malloc(tam*sizeof(char));
                for(cont=0; cont<tam; cont++){
                    a[cont]=yytext[cont];
                }
                yylval.cadena=a;
                return (IMP);
}
%%
