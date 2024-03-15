#include <iostream>
#include <stdlib.h>
using namespace std;


int sayial(	int sayi,int ysayi){
	
	int blgsayi=rand();
	
	for(;sayi<=blgsayi || sayi>=blgsayi;){
	
		if(sayi<blgsayi){
			cout <<"DAHA BUYUK BIR SAYI GIRINIZ:";
			cin >>ysayi;
			sayi=ysayi;
		}
		else if(sayi>blgsayi){
			cout <<"DAHA KUCUK BIR SAYI GIRINIZ:";
			cin >>ysayi;
			sayi=ysayi;
		}
		else{
			cout <<"TAHMIN EDILEN SAYI DOGRU";
			break;
		}
}
	return sayi;
}
int main (){
	int sayi,ysayi;
	
	cout <<"SAYI GIRINIZ:";
	cin >>sayi;
	
	sayial(sayi,ysayi);
	
	return 0;
}
