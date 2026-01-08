#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 
 
int main(){  
	cout<<"Nama : Denis Wahyu Rizqullah"<<endl;
	cout<<"NIM : 215150300111051"<<endl;
	//disini saya menggunakan short agar jangkauan data tidak terlalu luas
	short a[10][10],b[10][10],mul[10][10],d,c,i,j,k;
	short random;
	random = rand();
	    
	cout<<"Masukkan jumlah baris matriks yang diinginkan = ";    
	cin>>d;    
	cout<<"Masukkan jumlah kolom matriks yang diinginkan = ";    
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

