#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,tam=10;
  float dat[10]={};
  float A[]={0,0,0,0,0,0,0,0,0,0};
  float B[]={0,0,0,0,0,0,0,0,0,0};
  float p=0,antp=0;
  
  printf("\t\t\t\tPromedios\n");
  printf("Ingrese diez datos para ser promediados.\n");
  printf("Cada dato se ordenara en un arreglo mayor o menor al valor del promedio.\n\n");
  
  for(i=0;i<tam;i++){
        printf("\nDato %d: ",i+1);
        scanf("%f",&dat[i]);
  }
  
  for(i=0;i<tam;i++){
        p=dat[i]+antp;
        antp=p;
  }
  p=antp/tam;
  printf("\n\nPromedio: %g",p);
  
  for (i=0;i<tam;i++){
            if (dat[i] >= p){
               A[i]=dat[i];
            }else if (dat[i] < p){
               B[i]=dat[i];
            }else{
            break;}

  }

  printf("\n\nDatos Mayores o Iguales al Promedio:\n");
  for (i=0;i<tam;i++){
      if (A[i] > 0){
          printf("%.g\t",A[i]);
      }
  }
  
  printf("\n\nDatos Menores al Promedio:\n",p);
  for (i=0;i<tam;i++){
      if (B[i] > 0){
          printf("%.g\t",B[i]);
      }
  }

  printf("\n\n");        
  system("PAUSE");	
  return 0;
}
