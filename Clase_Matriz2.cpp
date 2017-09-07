#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//EN ESTA SECCIÖN DE CONSTRUYE LA CLASE
class Matriz{
      private:
              float *pA,*pB,*pC;
              int Nfilas1,Ncol1,Nfilas2,Ncol2;
      public:
             Matriz(float &_pA,float &_pB,float &_pC,int _Nfilas1,int _Ncol1,int _Nfilas2,int _Ncol2);
             void suma(float &_pA,float &_pB,float &_pC,int _Nfilas1,int _Ncol1);
             //void transpuesta();
             //void producto();
             
             };
//EN ESTE PASO SE INICIALIZA LA CLASE             
Matriz::Matriz(float &_pA,float &_pB,float &_pC, int _Nfilas1,int _Ncol1,int _Nfilas2,int _Ncol2){
                       pA=&_pA;
                       pB=&_pB;
                       pC=&_pC;
                       Nfilas1=_Nfilas1;
                       Ncol1=_Ncol1;
                      Nfilas2=_Nfilas2;
                       Ncol2=_Ncol2;
                       };
                       
//SE PROCEDE A DEFINIR LOS MÈTODOS

void Matriz::suma(float &_pA,float &_pB, float &_pC,int _Nfilas1,int _Ncol1){
	
    int i,j;
    
	
	for (i=0;i<_Nfilas1;i++){
		
		for (j=0;j<_Ncol1;j++){	
			
			*(&_pC+i*_Ncol1+j)=*(&_pA+i*_Ncol1+j)+*(&_pB+i*_Ncol1+j); //Acá se está llenando las direcciones de memoria de la matriz C con la suma del
			//contenido de las matrices A y B.
		}
	}
    
	}
     

// void Matriz::transpuesta(){
//     
//	int i,j;
//	
//	for (i=0;i<Ncol1;i++){
//		
//		for (j=0;j<Nfilas1;j++){	
//			
//			*(pC+i*Nfilas1+j)=*(pA+j*Ncol1+i); //Acá se está llenando las direcciones de memoria de la matriz C con la suma del
//			//contenido de las matrices A y B.
//		}
//	}
//    
//	}
     
// void Matriz::producto(){
//     int i,j,k;
//	
//	for (i=0;i<Nfilas1;i++){
//		for (j=0;j<Ncol2;j++){
//			
//			*(pC+i*Ncol2+j)=0;
//			
//			for (k=0;k<Nfilas2;k++){
//				
//				*(pC+i*Ncol2+j)=*(pC+i*Ncol2+j)+*(pA+i*Ncol1+k)*(*(pB+k*Ncol2+j));
//				
//			}
//		}
//	}
//    
//	}
	
	
     
    int main(){
     	
    int i,j,_Nfilas1,_Ncol1,_Nfilas2,_Ncol2;
    float *_pA, *_pB, *_pC;
	
	printf("ingrese el numero de filas y columnas de la matriz A:\n");
	scanf("%i %i",&_Nfilas1,&_Ncol1);
	
	printf("ingrese el numero de filas y columnas de la matriz B:\n");
	scanf("%i %i",&_Nfilas2,&_Ncol2);
	
	printf("Nfilas A=%i\n",_Nfilas1);
	printf("Ncol A=%i\n",_Ncol1);
	printf("Nfilas B=%i\n",_Nfilas2);
	printf("Ncol B=%i\n",_Ncol2);
	
	
	float A[_Nfilas1][_Ncol1],B[_Nfilas2][_Ncol2],C[_Nfilas1][_Ncol1];
	
		
	for (i=0;i<_Nfilas1;i++){
		for (j=0;j<_Ncol1;j++){
			
			printf("Ingrese A(%i,%i):\n",i+1,j+1);
			scanf("%f",&A[i][j]);
		}
	}
	
	for (i=0;i<_Nfilas2;i++){
		for (j=0;j<_Ncol2;j++){
			
			printf("Ingrese B(%i,%i):\n",i+1,j+1);
			scanf("%f",&B[i][j]);
		}
	}
	
	
	_pA=&A[0][0];
	_pB=&B[0][0];
	_pC=&C[0][0];
	
	
	printf("direccion A=%d \n",_pA);
	printf("direccion B=%d \n",_pB);
	printf("direccion C=%d \n",_pC);
	
         
         //SE CREA EL OBJETO c1 DE CLASE "MATRIZ"
         
         
         Matriz R=Matriz(*_pA,*_pB,*_pC,_Nfilas1,_Ncol1,_Nfilas2,_Ncol2);
         
         //Y LUEGO SE PROCEDE A APLICAR LOS MÉTODOS SOBRE EL OBJETO c1
         
         R.suma(*_pA,*_pB,*_pC,_Nfilas1,_Ncol1);
         
         
        for (i=0;i<_Nfilas1;i++){
		
			for (j=0;j<_Ncol2;j++){
			
	 		printf("C(%i,%i)=%f \n",i+1,j+1,C[i][j]);
		}
	}
         
         //printf("\n");
         //c1.producto();
         //printf("\n");
         system("pause");
         
         }
         
             
