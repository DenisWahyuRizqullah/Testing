#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 
 
int main(){  
	short a[10][10],b[10][10],mul[10][10],d,c,i,j,k;
	short random;
	random = rand();
	    
	cout<<"Masukkan jumlah baris untuk matriks=";    
	cin>>d;    
	cout<<"Masukkan jumlah kolom untuk matriks=";    
	cin>>c;    
	cout<<"matriks A = "<<endl;    
	
	for(i=0;i<d;i++){    
	  for(j=0;j<c;j++){
	  	cout<<a[i][j]<<random<<endl;
		  }    
	}
	    
	cout<<"matriks B = "<<endl;    
	for(i=0;i<d;i++){
	  for(j=0;j<c;j++){
	  	cout<<b[i][j]<<random<<endl;
		  }    
	}    
	
	cout<<"Hasil perkalian dari matriks A & B = "<<endl;    
	for(i=0;i<d;i++){    
	  for(j=0;j<c;j++){mul[i][j]=0;    
  	    for(k=0;k<c;k++){
		  mul[i][j]+=a[i][k]*b[k][j];
		  }
		}    
	}
	    
  
	for(i=0;i<d;i++){    
	  for(j=0;j<c;j++){cout<<mul[i][j]<<" ";}    
		cout<<"\n";}    

system("pause");
return 0;  
}    

