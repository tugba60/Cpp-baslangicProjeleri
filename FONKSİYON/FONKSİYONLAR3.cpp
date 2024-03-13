#include <iostream>
using namespace std;

// Hangi deðeri döndürmek istiyorsak o þekilde bir fonk oluþturmalýyýz.

int returnletoplama(int say1,int say2, int say3){
	
	cout <<"TOPLAMA ISLEMINI FONSIYONLAR YARDIMI ILE YAPMA"<<endl;
	
	return say1+say2+say3;
	
	// cout ÝFADESÝ return DEN AÞAÐI YAZILIRSA OKUNMAZ. EN SON return ÝFADESÝ OLMALI
}


void toplam(int say1,int say2, int say3){
	
	cout <<say1 + say2 + say3;
}


int main(){
	int a=1,b=3,c=7;
	
	int sonuc1=dondurmeyletoplama(a,b,c); //return ÝFADESÝ OLDUÐU ÝÇÝN ÇIKTIYI BÝR DEÐÝÞKENE ATAYABÝLDÝK.
	
	//int sonuc2=toplam(a,b,c); ÞEKLÝNDE OLURSA HATA VERÝR!!!!
	
	dondurmeyletoplama(a,b,c); //ÇIKTI VERMEZ!!!!
	
	toplam(a,b,c);
	
	cout <<endl<<dondurmeyletoplama(a,b,c); //ÇIKTI VERÝR!!!!
	
		cout <<endl<<sonuc1<<endl;
	
		//COUT<<sonuc2; DA TANIMLI OLMAZ!!!!!
	
	return 0;
}

/*return ÝFADESÝ VARSA O FONKSÝYONU ANA MAÝNDE
 BÝR DEÐERE ATAYIP COUT YAPABÝLÝRÝZ 
AMA return ÝFADESÝ YOKSA HERHANGÝ BÝR DEÐERE ATANIP 
DÖNDÜRÜLEMEZ BU YÜZDEN DE ÇIKTISI ALINAMAZ!!!! */ 
