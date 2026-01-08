#include <iostream>
// #include <array>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int array[11] = {2,1,4,1,1,7,6,2,0,8,8};
	int a = sizeof(array)/4;
    cout<<a;
	int i = 1;	
	do{
		int j =a;
		do{
			cout<<" ";
			j--;
		}while(j>=i);
		int k =1;
		do{
            if(i-1<=a){
                cout<<array[i-1];
                k++;
            }
            else{
                break;
            }
		}while(k<=(2*i -1));
		cout<<endl;
		i++;		
	}while(i<a+1);

	system("pause");
	return 0;
}