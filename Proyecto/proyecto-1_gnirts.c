#include <stdio.h>
#include <stdlib.h>

char *strcy(char cp[], char or[]){
    int i;
    for(i = 0; or[i] != '\0'; ++i){
        cp[i] = or[i];
    }
    cp[i] = '\0';
}

int strln(char x[]){
    int cont=0, i=0;
     for(x[i]; x[i]!= '\0';i++){
        cont++;
    }
    return cont;
}

char * strca(char or[], char cp[]){
    int x,j;
    x=strln(or);
    for (j = 0; cp[j] != '\0'; x++, j++) {
        or[x] = cp[j];
    }
    or[x] = '\0';
    return(or);
}

int ctoi (char c[]){ //char a entero
    return atoi(c);
}

int dec (char c[]){
    int x, j=0, cont=0;
    for(x=0; c[x]!='\0'; x++){
        if(c[j]=='.'){
            cont++;
        }
        j++;
    }
    if(cont==1){
        return 1;
    }else
        return 0;
}

int detm(char c[]){
    int x, j=0, cont=0;
    for(x=0; c[x]!='\0'; x++){
        if(c[j]=='+'){
            cont++;
        }
        j++;
    }
    if(cont==1){
        return 1;
    }else
        return 0;
}

int detms(char c[]){
    int x, j=0, cont=0;
    for(x=0; c[x]!='\0'; x++){
        if(c[j]=='-'){
            cont++;
        }
        j++;
    }
    if(cont==1){
        return 1;
    }else
        return 0;
}

int detml(char c[]){
    int x, j=0, cont=0;
    for(x=0; c[x]!='\0'; x++){
        if(c[j]=='*'){
            cont++;
        }
        j++;
    }
    if(cont==1){
        return 1;
    }else
        return 0;
}

int detd(char c[]){
    int x, j=0, cont=0;
    for(x=0; c[x]!='\0'; x++){
        if(c[j]=='/'){
            cont++;
        }
        j++;
    }
    if(cont==1){
        return 1;
    }else
        return 0;
}

double stod(char cad[]){ //string a double
    double x;
    sscanf(cad, "%lf", &x);
    return x;
    
}

int ent(double x){
    double z=x-(int)x;
    if(z==0)
        return 1;
    else
        return 0;
}

char *strrev(char cadena[]) {
  int longitud = strlen(cadena);
  char temporal;
  for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
       izquierda++, derecha--) {
    temporal = cadena[izquierda];
    cadena[izquierda] = cadena[derecha];
    cadena[derecha] = temporal;
  }
  return cadena;
}

int numpos(int x){
    return (sqrt(pow(x,2)));
}

int strels(char Str1[], char Str2[]){ //nos dice si las cadenas son iguales, 0=iguales 1=diferentes
    int i;
    for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
        if(Str1[i] < Str2[i]){
   		return -1;
	}else if(Str1[i] > Str2[i]){
   		return 1;
	}else{
   		return 0;
	}
}


int mmenm(char Str1[], char Str2[]){ //nos dice si las cadenas son iguales, 0=iguales 1=diferentes
    printf("\n1=%s\n",Str1);
    printf("\n2=%s\n",Str2);
    int i,j=0;
    for(i=0; Str1[i]!='\0'; i++){
        if((int)Str2[j]<(int)Str1[j]){
            return -1;
        }else if((int)Str2[j]>(int)Str1[j]){
            return 1;
    }else if((int)Str2[j]==(int)Str1[j]){
            j++;
        }
    }
}
