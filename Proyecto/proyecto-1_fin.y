%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "arb.c"
#include "gnirts.c"

int yyerror (char *s);
int yywrap();
int yylex();

CONTENIDO *D,*A,*B,*C,*E,*X, *F, *DD;
int i=1;
ARBOLBINARIO raiz=NULL;
%}
             
/* Declaraciones de BISON */
%union{
	int entero;
	double decimal;
	char * cadena, * res, *va;
	
}

%token MOD
%token POW
%token <entero> ENTERO
%token <decimal> DECIMAL
%type <entero> exp
%type <decimal> expd
%token <cadena> CADENA
%token <res> INT DOUBLE STRING IMP IF
%token <va> VARIABLE 
%type <cadena> cad
%type <res> resi resd ress asig
%token VACIO
             
%left '+' '-'
%left '*' '/' MOD
%left POW
             
/* Gramática */
%%
             
input:    /* cadena vacía */
        | input line             
;

line:     '\n'
        | exp
        | expd
        | cad 
        | resi
        | resd
        | ress 
        | asig 
;

expd:    DECIMAL { $$ = $1; }
	| expd '+' expd        { printf("\nf(1)\n");printf("\nResultado=%.2f\n",$1 + $3);}
	| expd '+' exp        { printf("\nf(2)\n");printf("\nResultado=%.2f\n",$1 + $3);}
	| exp '+' expd        { printf("\nf(3)\n");printf("\nResultado=%.2f\n",$1 + $3);}
	| expd '-' expd        { printf("\nf(4)\n");printf("\nResultado=%.2f\n",$1 - $3);}
	| expd '-' exp        { printf("\nf(5)\n");printf("\nResultado=%.2f\n",$1 - $3);}
	| exp '-' expd        { printf("\nf(6)\n");printf("\nResultado=%.2f\n",$1 - $3);}
	| expd '*' expd        { printf("\nf(7)\n");printf("\nResultado=%.2f\n",$1 * $3);}
	| expd '*' exp        { printf("\nf(8)\n");printf("\nResultado=%.2f\n",$1 * $3);}
	| exp '*' expd        { printf("\nf(9)\n");printf("\nResultado=%.2f\n",$1 * $3);}
	| expd '/' expd        { printf("\nf(10)\n");printf("\nResultado=%.2f\n",$1 / $3);}
	| exp '/' expd        { printf("\nf(11)\n");printf("\nResultado=%.2f\n",$1 / $3);}
	| expd '/' exp        { printf("\nf(12)\n");printf("\nResultado=%.2f\n",$1 / $3);}
	| POW '(' expd ',' expd ')' {printf("\nf(13)\n");printf("\nResultado=%.2f\n",pow($3,$5));}
	| POW '(' exp ',' expd ')' {printf("\nf(14)\n");printf("\nResultado=%.2f\n",pow($3,$5));}
	| POW '(' expd ',' exp ')' {printf("\nf(15)\n");printf("\nResultado=%.2f\n",pow($3,$5));}
	| MOD '(' expd ',' expd ')' { printf("\nf(16)\n");printf("\nResultado=%lf\n",fmod($3,$5));}
	| MOD '(' exp ',' expd ')' { printf("\nf(17)\n");printf("\nResultado=%lf\n",fmod($3,$5));}
	| MOD '(' expd ',' exp ')' { printf("\nf(18)\n");printf("\nResultado=%lf\n",fmod($3,$5));}
	//| expd '%' expd        {$$ = fmod($1,$3);}
	//| expd '%' expd        { $$ = $1 % $3;    }

;


//Operaciones matematicas
exp:     ENTERO	{ $$ = $1; }
	| exp '+' exp        { printf("\nf(19)\n");printf("\nResultado=%d\n",$1 + $3);}
	| exp '-' exp        { printf("\nf(20)\n");printf("\nResultado=%d\n",$1 - $3);}
	| exp '*' exp        { printf("\nf(21)\n");printf("\nResultado=%d\n",$1 * $3);}
	| exp '/' exp        { printf("\nf(22)\n");
            if ((($1/$3)%2)==0){printf("\nResultado=%d\n",$1 / $3);}
            else { printf("\nResultado=%lf\n",(double)$1 /(double)$3);}
            
   }
	| MOD '(' exp ',' exp ')' { printf("\nf(23)\n");printf("\nResultado=%d\n",(int)fmod($3,$5));}
	| POW '(' exp ',' exp ')' { printf("\nf(24)\n");
	printf("\nNumero1=%d\n",$3);
	printf("\nNumero2=%d\n",$5);
	printf("\nResultado=%d\n",(int)pow((double)$3,(double)$5));}
    
;

//Menejo de caracteres
cad :   CADENA{$$ = $1;}
    | VARIABLE {$$ = $1;}
    | cad '+' cad       {printf("\nf(25)\n");printf("\nResultado: %s\n", strca($1,$3));}
    | IMP ';' {
    printf("\nf(26)\n");
        char uno[100],dos[100],tres[100],cuatro[100], cinco[100];
        //printf("\nEmpieza\n");
        printf("\n%s\n",$1);
        char delimitador[] = "+-/*";
        char mm[64], ori[100], demas[100], rep[100];
        int x=0, j=0,i, prin, nd=0, a, b;
        double c, d,qq,ww,ee,rr,tt;
        for(i=0; $1[i]!= '\0'; i++){
            if($1[i]=='+')
                nd++;
            if($1[i]=='-')
                nd++;
            if($1[i]=='/')
                nd++;
            if($1[i]=='*')
                nd++;
        }
        //printf("\nnumero total:%d\n",nd); //Cuenta los operandos
        
        for(i=0; $1[i]!= '='; i++){//parte la variable =
            ori[x]=$1[i];
            x++;
        }
        ori[x] = '\0';
        //printf("\n%s\n",ori);  
        
        prin=strln(ori)+1;
        for(prin; $1[prin]!= '\0'; prin++){ //parte lo demas
            demas[j]=$1[prin];
            j++;
        }
        demas[j] = '\0';
        strcy(rep,demas);
        D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
        strcy(D->name,ori);
        if(Buscarcon(raiz, D)!=NULL){ //Muestra si la variable esta declarada
            if(nd==1){
                strcpy(uno,strtok(demas, delimitador));
                strcpy(dos,strtok(NULL, delimitador));
                //printf("\n%s\n",uno);
                //printf("\n%s\n",dos);
                A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(A->name,uno);
                B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(B->name,dos);
                if(Buscarcon(raiz, A)!=NULL && Buscarcon(raiz, B)!=NULL){
                 int z, zz=0;
                 char *ptr;

                    for(z=0; rep[z]!='\0'; z++){
                        if(rep[zz]=='+'){
                        printf("\n%d %d\n",dec(Buscarcon(raiz, A)),dec(Buscarcon(raiz, B)));
                        printf("\n%s %s\n",Buscarcon(raiz, A),Buscarcon(raiz,B));
                            if(dec(Buscarcon(raiz, A))==0){
                                a=ctoi(Buscarcon(raiz, A));
                                if(dec(Buscarcon(raiz, B))==0){
                                    b=ctoi(Buscarcon(raiz, B));
                                    sprintf(mm,"%d",a+b);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                                    }
                                    else{
                                        c=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(((double)a)+c));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                    }
                                }
                                if(dec(Buscarcon(raiz, A))==1 && dec(Buscarcon(raiz, B))==0){
                                    c=stod(Buscarcon(raiz, A));
                                    b=ctoi(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(c+((double)b)));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                }
                                        c=stod(Buscarcon(raiz, A));
                                        d=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",c+d);
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                
                            }
                        else if(rep[zz]=='-'){
                        printf("\n%d %d\n",dec(Buscarcon(raiz, A)),dec(Buscarcon(raiz, B)));
                        printf("\n%s %s\n",Buscarcon(raiz, A),Buscarcon(raiz,B));
                            if(dec(Buscarcon(raiz, A))==0){
                                a=ctoi(Buscarcon(raiz, A));
                                if(dec(Buscarcon(raiz, B))==0){
                                    b=ctoi(Buscarcon(raiz, B));
                                    sprintf(mm,"%d",a-b);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                                    }
                                    else{
                                        c=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(((double)a)-c));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                    }
                                }
                                if(dec(Buscarcon(raiz, A))==1 && dec(Buscarcon(raiz, B))==0){
                                    c=stod(Buscarcon(raiz, A));
                                    b=ctoi(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(c-((double)b)));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                }
                                        c=stod(Buscarcon(raiz, A));
                                        d=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",c-d);
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                
                            }
                        else if(rep[zz]=='*'){
                        printf("\n%d %d\n",dec(Buscarcon(raiz, A)),dec(Buscarcon(raiz, B)));
                        printf("\n%s %s\n",Buscarcon(raiz, A),Buscarcon(raiz,B));
                            if(dec(Buscarcon(raiz, A))==0){
                                a=ctoi(Buscarcon(raiz, A));
                                if(dec(Buscarcon(raiz, B))==0){
                                    b=ctoi(Buscarcon(raiz, B));
                                    sprintf(mm,"%d",a*b);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                                    }
                                    else{
                                        c=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(((double)a)*c));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                    }
                                }
                                if(dec(Buscarcon(raiz, A))==1 && dec(Buscarcon(raiz, B))==0){
                                    c=stod(Buscarcon(raiz, A));
                                    b=ctoi(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(c*((double)b)));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                }
                                        c=stod(Buscarcon(raiz, A));
                                        d=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",c*d);
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                            }
                        else if(rep[zz]=='/'){
                        printf("\n%d %d\n",dec(Buscarcon(raiz, A)),dec(Buscarcon(raiz, B)));
                        printf("\n%s %s\n",Buscarcon(raiz, A),Buscarcon(raiz,B));
                            if(dec(Buscarcon(raiz, A))==0){
                                a=ctoi(Buscarcon(raiz, A));
                                if(dec(Buscarcon(raiz, B))==0){
                                    b=ctoi(Buscarcon(raiz, B));
                                    sprintf(mm,"%d",a/b);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                                    }
                                    else{
                                        c=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(((double)a)/c));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                    }
                                }
                                if(dec(Buscarcon(raiz, A))==1 && dec(Buscarcon(raiz, B))==0){
                                    c=stod(Buscarcon(raiz, A));
                                    b=ctoi(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",(c/((double)b)));
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                                }
                                        c=stod(Buscarcon(raiz, A));
                                        d=stod(Buscarcon(raiz, B));
                                        snprintf(mm,64,"%lf",c/d);
                                        int aux=1;
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        strcy(X->name,ori);
                                        //printf("\n->%s\n",D->name);
                                        eliminarABB(&raiz, X);
                                        X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                        printf("Ingresando ID\n");
                                        aux=i-aux;
                                        printf("%d\n",aux);
                                        X->id=aux;
                                        printf("Ingresando el nombre\n");
                                        strcy(X->name,ori);
                                        printf("Ingresando el tipo\n");
                                        strcy(X->type,"double");
                                        printf("Ingresando el valor\n");
                                        strcy(X->value,mm);
                                        insertarABB(&raiz,X);
                            }
                            zz++;
                        }
                }else
                    printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
            }
            if(nd==2){
            printf("\n\t\tENTRO AQUI\n");
                strcpy(uno,strtok(demas, delimitador));
                strcpy(dos,strtok(NULL, delimitador));
                strcpy(tres,strtok(NULL, delimitador));
                A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(A->name,uno);
                B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(B->name,dos);
                C=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(C->name,tres);
                qq=stod(Buscarcon(raiz, A));
                ww=stod(Buscarcon(raiz, B));
                ee=stod(Buscarcon(raiz, C));
                if(Buscarcon(raiz, A)!=NULL && Buscarcon(raiz, B)!=NULL && Buscarcon(raiz, C)!=NULL){
                    if(detm(rep)==1 && detms(rep)==1){ //+ y -
                        double resf;
                        resf=qq+ww-ee;
                        printf("\t\n%lf+%lf-%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detm(rep)==1 && detml(rep)==1){ //+ *
                        double resf;
                        resf=qq+ww*ee;
                        printf("\t\n%lf+%lf*%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detm(rep)==1 && detd(rep)==1){ //+ /
                        double resf;
                        resf=qq+ww/ee;
                        printf("\t\n%lf+%lf/%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detms(rep)==1 && detml(rep)==1){ //- *
                        double resf;
                        resf=qq-ww*ee;
                        printf("\t\n%lf-%lf*%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detms(rep)==1 && detd(rep)==1){ //- /
                        double resf;
                        resf=qq-ww/ee;
                        printf("\t\n%lf-%lf/%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detml(rep)==1 && detd(rep)==1){ //* /
                        double resf;
                        resf=qq*ww/ee;
                        printf("\t\n%lf*%lf/%lf=%lf\n",qq,ww,ee,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                }else
                    printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
            }
            if(nd==3){
                strcpy(uno,strtok(demas, delimitador));
                strcpy(dos,strtok(NULL, delimitador));
                strcpy(tres,strtok(NULL, delimitador));
                strcpy(cuatro,strtok(NULL, delimitador));
                A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(A->name,uno);
                B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(B->name,dos);
                C=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(C->name,tres);
                E=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(E->name,cuatro);
                qq=stod(Buscarcon(raiz, A));
                ww=stod(Buscarcon(raiz, B));
                ee=stod(Buscarcon(raiz, C));
                rr=stod(Buscarcon(raiz, E));
                //printf("\nVAMOS BIEN\n");
                if(Buscarcon(raiz, A)!=NULL && Buscarcon(raiz, B)!=NULL && Buscarcon(raiz, C)!=NULL && Buscarcon(raiz, E)!=NULL){
                //printf("\nENTRO\n");
                    if(detm(rep)==1 && detms(rep)==1 && detml(rep)==1){ //+ - *
                        double resf;
                        resf=qq+ww-ee*rr;
                        printf("\t\n%lf+%lf-%lf*%lf=%lf\n",qq,ww,ee,rr,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detm(rep)==1 && detms(rep)==1 && detd(rep)==1){ //+ - /
                        double resf;
                        resf=qq+ww-ee/rr;
                        printf("\t\n%lf+%lf-%lf/%lf=%lf\n",qq,ww,ee,rr,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detms(rep)==1 && detml(rep)==1 && detd(rep)==1){ //- * /
                        double resf;
                        resf=qq-ww*ee/rr;
                        printf("\t\n%lf-%lf*%lf/%lf=%lf\n",qq,ww,ee,rr,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                    else if(detm(rep)==1 && detml(rep)==1 && detd(rep)==1){ //+ * /
                        double resf;
                        resf=qq+ww*ee/rr;
                        printf("\t\n%lf+%lf*%lf/%lf=%lf\n",qq,ww,ee,rr,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                }else
                    printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
            }
            if(nd==4){
                strcpy(uno,strtok(demas, delimitador));
                strcpy(dos,strtok(NULL, delimitador));
                strcpy(tres,strtok(NULL, delimitador));
                strcpy(cuatro,strtok(NULL, delimitador));
                strcpy(cinco,strtok(NULL, delimitador));
                A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(A->name,uno);
                B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(B->name,dos);
                C=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(C->name,tres);
                E=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(E->name,cuatro);
                F=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(F->name,cinco);
                qq=stod(Buscarcon(raiz, A));
                ww=stod(Buscarcon(raiz, B));
                ee=stod(Buscarcon(raiz, C));
                rr=stod(Buscarcon(raiz, E));
                tt=stod(Buscarcon(raiz, F));
                //printf("\nVAMOS BIEN\n");
                if(Buscarcon(raiz, A)!=NULL && Buscarcon(raiz, B)!=NULL && Buscarcon(raiz, C)!=NULL && Buscarcon(raiz, E)!=NULL && Buscarcon(raiz, F)!=NULL){
                //printf("\nENTRO\n");
                    if(detm(rep)==1 && detms(rep)==1 && detml(rep)==1 && detd(rep)==1){ //+ - *
                        double resf;
                        resf=qq+ww-ee*rr/tt;
                        printf("\t\n%lf+%lf-%lf*%lf/%lf=%lf\n",qq,ww,ee,rr,tt,resf);
                        if(ent(resf)==1){
                                    sprintf(mm,"%d",(int)resf);
                                    printf("\n%s\n",mm);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    //printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"int");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }else{      
                                    
                                    snprintf(mm, 64, "%lf", resf);
                                    int aux=1;
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    strcy(X->name,ori);
                                    //printf("\n->%s\n",D->name);
                                    eliminarABB(&raiz, X);
                                    X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                                    printf("Ingresando ID\n");
                                    aux=i-aux;
                                    printf("%d\n",aux);
                                    X->id=aux;
                                    printf("Ingresa el nombre\n");
                                    strcy(X->name,ori);
                                    printf("Ingresa el tipo\n");
                                    strcy(X->type,"double");
                                    printf("Ingresando el valor\n");
                                    strcy(X->value,mm);
                                    insertarABB(&raiz,X);
                        }
                    }
                }else
                    printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
            }
        }else{
            printf("\n\tNO HAS DECLARADO LA VARIABLE\n");
        }
        
    }
    |DOUBLE IMP';'{
        printf("\nf(27)\n");
        char b[100];
        int x=0; char ne[100], i;
        for(i=0; $2[i]!= '='; i++){//parte la variable 1=
            b[x]=$2[i];
            x++;
        }
        b[x] = '\0';
        //puts(b);
        int l=0;
        int num=strln(b)+1;
        printf("\n%d\n",num);
        for(num; $2[num]!= '\0'; num++){//parte la variable =2
            ne[l]=$2[num];
            l++;
        }
        ne[l] = '\0';
        //puts(ne);
            B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(B->name,b);
            if(Buscar(raiz, B)==1) //NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else{
              /*A=(CONTENIDO*)malloc(sizeof(CONTENIDO));
             strcy(A->type,"string");
             printf("\n%d\n",Buscars(raiz, A));
             if(Buscars(raiz, A)!= 1){//si es compatible*/
                X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(X->name,ne);
                    char mm[1000], array[64];
                    double aux;
                    E=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                    strcy(E->name,ne);
                    strcy(mm,Buscarcon(raiz, E)); //SACAMOS EL CONTENIDO DE LA VARIABLE Y COPIAMOS
                    aux=5.0;
                    //printf("\nd=%lf\n",aux);
                    snprintf(array, 64, "%f", aux);
                    //printf("\ncad=%lf\n",array);
                    printf("Ingresando el nombre\n");
                    //printf("\nnombre ingresado=%s\n",b);
                    strcy(D->name,b);
                    printf("Ingresa el tipo\n");
                    strcy(D->type,"double");
                    printf("Ingresando el valor\n");
                    strcy(D->value,array);
                    insertarABB(&raiz,D);
                }
                /*else
                    printf("\n\tNO ES COMPATIBLE");*/
            }
    |INT IMP ';'{
        printf("\nf(28)\n");
        char b[100];
        int x=0; char ne[100], i;
        for(i=0; $2[i]!= '='; i++){//parte la variable 1=
            b[x]=$2[i];
            x++;
        }
        b[x] = '\0';
        //puts(b);
        int l=0;
        int num=strln(b)+1;
        printf("\n%d\n",num);
        for(num; $2[num]!= '\0'; num++){//parte la variable =2
            ne[l]=$2[num];
            l++;
        }
        ne[l] = '\0';
        //puts(ne);
            B=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(B->name,b);
            if(Buscar(raiz, B)==1) //NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else{
             X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
             strcy(X->name,ne);
                if(Buscarcon(raiz, X)!=NULL){
                    char mm[1000], array[64];
                    int aux;
                    E=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                    strcy(E->name,ne);
                    strcy(mm,Buscarcon(raiz, E)); //SACAMOS EL CONTENIDO DE LA VARIABLE Y COPIAMOS
                    aux=atoi(mm);
                    printf("\ni=%d\n",aux);
                    sprintf( array,"%d", aux);
                    printf("\ncad=%s\n",array);
                    printf("\nnombre ingresado=%s\n",b);
                    strcy(D->name,b);
                    printf("Ingresa el tipo\n");
                    strcy(D->type,"int");
                    printf("Ingresando el valor\n");
                    strcy(D->value,array);
                    insertarABB(&raiz,D);
				}else
                    printf("\n\tNO ESTA DECLARADO\n");
            }
        }
;

//Declaraciones de int
resi : INT VARIABLE ';'
{
            printf("\nf(29)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$2);
            
            if(Buscar(raiz, D)==1) //NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID\n");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,$2);
				printf("Ingresando el tipo\n");
				strcy(D->type,$1);
                printf("Ingresando el valor\n");
				insertarABB(&raiz,D);
                }
            }
        | INT VARIABLE'='exp';'{
        printf("\nf(30)\n");
            char cad[100];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$2);
            if(Buscar(raiz, D)==1)
            printf("Esta en la tabla");
            //printf("\nQPDDDDDDD %s\n", D->name);
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID");
                D->id=i++;
				printf("Ingresa el nombre\n");
				strcy(D->name,$2);
				printf("Ingresa el tipo\n");
				strcy(D->type,$1);
                printf("Ingresando el valor\n");
                char array[64];
                sprintf( array,"%d", $4 );
                printf("%s\n", array );
				strcy(D->value,array);
				insertarABB(&raiz,D);
                }
            }

;

//Declaraciones de double
resd : DOUBLE VARIABLE ';'
{           printf("\nf(31)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$2);
            if(Buscar(raiz, D)==1)//NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID\n");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,$2);
				printf("Ingresando el tipo\n");
				strcy(D->type,$1);
                printf("Ingresando el valor\n");
				insertarABB(&raiz,D);
                }
        }
        | DOUBLE VARIABLE'='expd';'{
        printf("\nf(32)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$2);
            if(Buscar(raiz, D)==1)
            printf("Esta en la tabla");
            //printf("\nQPDDDDDDD %s\n", D->name);
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,$2);
				printf("Ingresando el tipo\n");
				strcy(D->type,$1);
                printf("Ingresando el valor\n");
                char array[64];
                snprintf(array, 64, "%f", $4);
                printf("%s\n", array );
				strcy(D->value,array);
				insertarABB(&raiz,D);
                }
        }
;

//Declaraciones de cadenas
ress : STRING VARIABLE';'
{
printf("\nf(33)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$2);
            if(Buscar(raiz, D)==1)//NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else
                {
				D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID\n");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,$2);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
				insertarABB(&raiz,D);
                }
        }
        | STRING VARIABLE'='CADENA';'{
        printf("\nf(34)\n");
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$2);
            if(Buscar(raiz, D)==1)//NOS DICE SI ESTA REPETIDA LA VARIABLE
            printf("\n\tYA ESTA DECLARADA ESA VARIABLE\n");
            else
                {
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
				printf("Ingresando ID");
                D->id=i++;
				printf("Ingresando el nombre\n");
				strcy(D->name,$2);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
				strcy(D->value,$4);
				insertarABB(&raiz,D);
				}
        }
;
        
//Asigaciones sin tipo de d
asig : VARIABLE'='exp';'
{
printf("\nf(35)\n");
        int aux=1, cont=1;
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$1);
            //printf("\n->%s\n",D->name);
            eliminarABB(&raiz, D);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                printf("Ingresando ID\n");
                aux=i-aux;
                printf("%d\n",aux);
                D->id=aux;
				printf("Ingresa el nombre\n");
				strcy(D->name,$1);
				printf("Ingresa el tipo\n");
				strcy(D->type,"int");
                printf("Ingresando el valor\n");
                char array[64];
                sprintf( array,"%d", $3 );
                printf("%s\n", array );
				strcy(D->value,array);
				insertarABB(&raiz,D);
        }
        | VARIABLE'='expd';'{
        printf("\nf(36)\n");
            int aux=1;
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$1);
            //printf("\n->%s\n",D->name);
            eliminarABB(&raiz, D);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                printf("Ingresando ID\n");
                aux=i-aux;
                printf("%d\n",aux);
                D->id=aux;
				printf("Ingresa el nombre\n");
				strcy(D->name,$1);
				printf("Ingresa el tipo\n");
				strcy(D->type,"double");
                printf("Ingresando el valor\n");
                char array[64];
                snprintf(array, 64, "%f", $3);
                printf("%s\n", array );
				strcy(D->value,array);
				insertarABB(&raiz,D);
        }
        | VARIABLE'='CADENA';'{
        printf("\nf(37)\n");
            int aux=1;
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$1);
            //printf("\n->%s\n",D->name);
            eliminarABB(&raiz, D);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                //printf("%d\n",aux);
                D->id=aux;
				printf("Ingresa el nombre\n");
				strcy(D->name,$1);
				printf("Ingresa el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,$3);
				insertarABB(&raiz,D);
        }
        
        | IMP '(' VARIABLE ',' exp ')' ';'{
        printf("\nf(38)\n");
        //printf("\nENTRO!!!!!!!\n");
        char b[100];
        int x=0;
        for(i=0; $1[i]!= '='; i++){//parte la variable =
            b[x]=$1[i];
            x++;
        }
        b[x] = '\0';
        D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
        strcy(D->name,b);
        DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
        strcy(DD->name,$3);
        if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
        //printf("\nENTROOOO\n");
        //printf("\n%d\n",$5);
            int i, j, x=0, l=0, cont=1;
            char mm[1000];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$3);
            strcy(mm,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE Y COPIAMOS
            int aux=1;
             D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,b);
                eliminarABB(&raiz, D);
               // printf("\nelimino, listro para crear\n");
            if($5==0){
                //printf("\nResultado: 3\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,"3");
				insertarABB(&raiz,D);
            }
            if($5==1){
                //printf("\nResultado: %s\n", mm);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,mm);
				insertarABB(&raiz,D);
            }
            if($5>1){
            char ori[1000],cp[1000];
            //printf("\na\n");
            strcy(ori,mm);
            strcy(cp,mm);
                while($5!=cont){
               // printf("\n%d\n",cont);
                    if(cont<$5){
                        strca(ori,cp);
                        //printf("\n%s\n",strca(ori,cp));
                    }
                           cont++;
                }
                //printf("\nc\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,ori);
                //printf("Vamos bien");
				insertarABB(&raiz,D);
            }
            if($5<0){
                //printf("\nnumero->%d\n",$5);
                int lim=numpos($5);
                //printf("\ncuadrado->%d\n",lim);
                char ori[1000],cp[1000];
                //printf("\na\n");
                strcy(ori,strrev(mm));
                strcy(cp,ori);
                while(lim!=cont){
                //printf("\n%d\n",cont);
                    if(cont<lim){
                        strca(ori,cp);
                        //printf("\n%s\n",strca(ori,cp));
                    }
                           cont++;
                }
                //printf("\nc\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,ori);
                //printf("Vamos bien :3\n");
				insertarABB(&raiz,D);
                }
            }else
                printf("\n\tNO ESTA DECLADO LA VARIABLE\n");
        }
        | IF '(' VARIABLE '<' VARIABLE ')' ';'{
        printf("\nf(39)\n");
            char uno[100], dos[100];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$3);
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,$5);
            if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$3);
            strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,$5);
            strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            //printf("%s %s",uno,dos);
            //printf("\n%d<%d",stod(uno),stod(dos));
           /* X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(X->type,"string");
            printf("\nf%d\n",Buscars(raiz,D,X));*/
                //printf("\n%d\n",mmenm(uno,dos));
                //printf("que pex");
                if(mmenm(uno,dos)==1)
                    printf("\t\nTRUE\n");
                else
                    printf("\t\nFALSE\n");
                
        }
         else
            printf("\t\nNO ESTA DECLARADO\n");
    
    }
        | IF '(' VARIABLE '>' VARIABLE ')' ';'{
        printf("\nf(40)\n");
                char uno[100], dos[100];
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,$3);
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,$5);
                if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,$3);
                strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,$5);
                strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                //printf("%s %s",uno,dos);
                //printf("\n%d<%d",stod(uno),stod(dos));
                    if(stod(uno)>stod(dos))
                        printf("\t\nTRUE\n");
                    else
                        printf("\t\nFALSE\n");
                    
            }
            else
                printf("\t\nNO ESTA DECLARADO\n");
        
        }
        
        IF '(' VARIABLE '<' VARIABLE ')' ';'{
        printf("\nf(39)\n");
            char uno[100], dos[100];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$3);
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,$5);
            if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$3);
            strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,$5);
            strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            //printf("%s %s",uno,dos);
            //printf("\n%d<%d",stod(uno),stod(dos));
           /* X=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(X->type,"string");
            printf("\nf%d\n",Buscars(raiz,D,X));*/
                //printf("\n%d\n",mmenm(uno,dos));
                //printf("que pex");
                if(mmenm(uno,dos)==1)
                    printf("\t\nTRUE\n");
                else
                    printf("\t\nFALSE\n");
                
        }
         else
            printf("\t\nNO ESTA DECLARADO\n");
    
    }
        | IF '(' VARIABLE '>' VARIABLE ')' ';'{
        printf("\nf(40)\n");
                char uno[100], dos[100];
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,$3);
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,$5);
                if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,$3);
                strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,$5);
                strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                //printf("%s %s",uno,dos);
                //printf("\n%d<%d",stod(uno),stod(dos));
                    if(mmenm(uno,dos)==-1)
                    printf("\t\nFALSE\n");
                else
                    printf("\t\nTRUE\n");
                    
            }
            else
                printf("\t\nNO ESTA DECLARADO\n");
        
        }
        
        | IF '(' VARIABLE '=''=' VARIABLE ')' ';'{
        printf("\nf(41)\n");
                char uno[100], dos[100];
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,$3);
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,$6);
                if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,$3);
                strcy(uno,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(DD->name,$6);
                strcy(dos,Buscarcon(raiz, DD)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                printf("%s %s",uno,dos);
                printf("\n%d<%d",stod(uno),stod(dos));
                    if(stod(uno)==stod(dos))
                        printf("\t\nTRUE\n");
                    else
                        printf("\t\nFALSE\n");
                    
            }
            else
                printf("\t\nNO ESTA DECLARADO\n");
        
        }
        
        | IF '(' VARIABLE '=' '=' POW '(' CADENA ',' exp ')' '+' CADENA '+' CADENA ')' ';' {
            printf("\nf(42)\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,$3);
                if(Buscarcon(raiz, D)!=NULL){ //SI LAS VARIABLES ESTAN DECLARADAS
                    int i, j, x=0, l=0, cont=1;
                    char mm[1000], conte[100];
                    strcy(mm,$8);
                    int aux=1;
                    D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                    strcy(D->name,$3);
                    strcy(conte,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
                    if($10==0){
                        strcy(mm,"3");
                    }
                    if($10==1){
                        printf("\nNADA\n");
                    }
                    if($10>1){
                    char ori[1000],cp[1000];
                    //printf("\na\n");
                    strcy(ori,mm);
                    strcy(cp,mm);
                        while($10!=cont){
                    // printf("\n%d\n",cont);
                            if(cont<$10){
                                strca(ori,cp);
                                //printf("\n%s\n",strca(ori,cp));
                            }
                                cont++;
                        }
                        strcy(mm,ori);
                    }
                    if($10<0){
                        //printf("\nnumero->%d\n",$5);
                        int lim=numpos($10);
                        //printf("\ncuadrado->%d\n",lim);
                        char ori[1000],cp[1000];
                        //printf("\na\n");
                        strcy(ori,strrev(mm));
                        strcy(cp,ori);
                        while(lim!=cont){
                        //printf("\n%d\n",cont);
                            if(cont<lim){
                                strca(ori,cp);
                                //printf("\n%s\n",strca(ori,cp));
                            }
                                cont++;
                        }
                        strcy(mm,ori);
                }
                strca(mm,$13);
                strca(mm,$15);
                puts(mm);
                puts(conte);
                if(strels(mm,conte)==0)
                    printf("\nSon iguales\n");
                else
                    printf("\nSon diferentes\n");
            }else
                printf("\t\nNO ESTA DECLARADO\n");    
        
        }
        
        
        |IMP '(' VARIABLE ',' exp ')' '+' CADENA ';'{
             printf("\nf(43)\n");
             char b[100];
            int x=0;
            for(i=0; $1[i]!= '='; i++){//parte la variable =
                b[x]=$1[i];
                x++;
            }
            b[x] = '\0';
            //puts(b);
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,b);
            DD=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(DD->name,$3);
            if(Buscarcon(raiz, D)!=NULL && Buscarcon(raiz, DD)!=NULL){
             int i, j, x=0, l=0, cont=1;
            char mm[1000];
            D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
            strcy(D->name,$3);
            strcy(mm,Buscarcon(raiz, D)); //SACAMOS EL CONTENIDO DE LA VARIABLE
            int aux=1;
             D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                strcy(D->name,b);
                eliminarABB(&raiz, D);
               // printf("\nelimino, listro para crear\n");
            if($5==0){
                char cero[10];
                strcy(cero,"3");
                strca(cero,$8);
                //puts(cero);
                //printf("\nResultado: 3\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,cero);
				insertarABB(&raiz,D);
            }
            if($5==1){
                //printf("\nadentro:%s\n",mm);
                strca(mm,$8);
                //printf("\nconcatenado:%s\n",mm);
                //printf("\nResultado: %s\n", mm);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,mm);
				insertarABB(&raiz,D);
            }
            if($5>1){
            char ori[1000],cp[1000];
            //printf("\na\n");
            strcy(ori,mm);
            strcy(cp,mm);
                while($5!=cont){
               // printf("\n%d\n",cont);
                    if(cont<$5){
                        strca(ori,cp);
                        //printf("\n%s\n",strca(ori,cp));
                    }
                           cont++;
                }
                //printf("\nc\n");
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,ori);
                //printf("Vamos bien");
				insertarABB(&raiz,D);
            }
            if($5<0){
                //printf("\nnumero->%d\n",$5);
                int lim=numpos($5);
                //printf("\ncuadrado->%d\n",lim);
                char ori[1000],cp[1000];
                //printf("\na\n");
                strcy(ori,strrev(mm));
                strcy(cp,ori);
                while(lim!=cont){
                //printf("\n%d\n",cont);
                    if(cont<lim){
                        strca(ori,cp);
                        //printf("\n%s\n",strca(ori,cp));
                    }
                           cont++;
                }
                //printf("\nc\n");
                strca(ori,$8);
                D=(CONTENIDO*)malloc(sizeof(CONTENIDO));
                //printf("Ingresando ID\n");
                aux=i-aux;
                D->id=aux;
				printf("Ingresando el nombre\n");
				strcy(D->name,b);
				printf("Ingresando el tipo\n");
				strcy(D->type,"char*");
                printf("Ingresando el valor\n");
                strcy(D->value,ori);
                //printf("Vamos bien :3\n");
				insertarABB(&raiz,D);
                }
        }
        else
            printf("\nLA VARIABLE NO ESTA DECLARADO\n");
        }
        
        | VACIO {imprimirOrd(raiz);}
;


%%

int main() {
  yyparse();
}
             
yyerror (char *s)
{
  printf ("--%s--\n", s);
}
            
int yywrap()  
{  
  return 1;  
}  
