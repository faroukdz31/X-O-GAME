#include<stdio.h>
int choix;
void plateau_jeux(int T[][3]){
	int i;
	int j;
	printf ("\n               --------\n");
	for (i=0;i<3;i++){
		printf ("               ");
		for (j=0;j<3;j++){
			printf ("|");
			if (T[i][j]==0) 
			printf (" ");
		 if (T[i][j]==1) 
			printf ("X");
			if (T[i][j]==2) 
			printf ("O");
		                  }
		                  printf ("|\n               --------\n");
     	}
	
}
int test_gangnant(int T[][3]){
	int i ; 
	for (i=0;i<3;i++){
		if (T[i][0]==T[i][1] && T[i][0]==T[i][2]  && T[i][0]!=0){
			return 1 ; 
		}
		for (i=0;i<3;i++){ 
		if (T[0][i]==T[1][i] && T[0][i]==T[2][i] &&  T[0][i]!=0){
			return 1 ; }
			}
			if (T[0][0]==T[1][1] && T[0][0]==T[2][2] && T[0][0]!=0){
			return 1 ; 
		if (T[0][2]==T[1][1] && T[0][2]==T[2][0] && T[0][2]!=0){
			return 1 ; 
			
		}
	}
	return 0 ; 
}
 }
int main ()
{
	int T[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int test = 1 ; 
	int i,l,c; 
	plateau_jeux(T);
	while (test<=9){
		
		for (i=1;i<=2;i++){
			printf ("joueur N:%d : \n",i);
		 do {	
				do {
					printf ("donner numero de la ligne soit 1 , 2 ou 3 :  ");
		    	     scanf ("%d",&l);
		        }while (l!=1  && l!=2 && l!= 3);
		        do   {
				 printf ("donner numero de la colone soit 1 , 2 ou 3 :  ");
		    	     scanf ("%d",&c);
		        }while (c!=1  && c!=2 && c!= 3);
		
		       if (T[l-1][c-1]==0){
		      	T[l-1][c-1]=i;
		     	test++;
		     	choix=1;
	         	}else {
		    	printf ("seisir un autre choix ! ! ! ! \n ");
                         choix=0;
	    	           } 
	        }while (choix==0 );
	     plateau_jeux(T);
	      if (test_gangnant(T)==1) 
	      	printf ("bravoo ---> joueur N: %d est gangner  \n ",i);
	        else {printf ("le joueure 1 et 2 egale");
			} 
	    }	
	 
          	
          	
	}
}
	
	
	
	
	
	
	
	
 
