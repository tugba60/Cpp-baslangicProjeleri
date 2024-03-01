#include <iostream>
using namespace std;

int asal(int x);

int main(){
	int sayi,sonuc;
	cout <<"ASAL OLUP OLMADIGI SORGULANACAK SAYI:";
	cin >>sayi;
	
	sonuc= asal(sayi);
	
	if(sonuc==0)
	cout <<sayi<<" ASAL DEGILDIR.";
	else
	cout <<sayi<<" ASALDIR.";
	
	return 0;
}

int asal(int x){
	int i=2;
	int index=0;
	
	for(i=2;i<x;i++){
		if(x%i==0){
			index++;
		}
	}
	
	if(index!=0)
	return 0;
	else
	return 1;
}
