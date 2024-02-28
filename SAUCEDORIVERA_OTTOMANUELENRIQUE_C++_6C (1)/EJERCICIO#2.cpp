#include<iostream> 
using namespace std; 
 int main   (){
 	
 	int vector[]={3,4,1,5 };
int suma= 0; 
for(int i=0;i<4;i++){
	suma += vector[i]; 
}


cout<<" Suma:" <<suma<<endl; 
cout<<"Promedio:" <<suma/4<<endl ; 
cout<<"25%:" <<suma*0.25<<endl; 
 

return 0;
 }


