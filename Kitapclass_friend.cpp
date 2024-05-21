#include <iostream>
#include <locale.h>
using namespace std;

class Yazar{
	string m_isim;
	int m_yas;
	int m_kitapSayisi;
	
	public:
		Yazar(string isim,int yas,int kitapSayisi):m_isim{isim},m_yas{yas},m_kitapSayisi{kitapSayisi}{ }
		string getisim(){return m_isim;}
		
};
class Kitap{
	string m_ad;
	double m_fiyat;
	int m_sayfa;
	int m_puan;
	public:
		Kitap(string ad,double fiyat,int sayfa,int puan):m_ad{ad},m_fiyat{fiyat},m_sayfa{sayfa},m_puan{puan}{ }
		void kitapBilgileri(Yazar& yazar){
			cout<<"KİTABIN ADI: "<<m_ad<<"\nKİTABIN YAZARI: "<<yazar.getisim()<<"\nKİTABIN SAYFA SAYISI: ";
			cout<<m_sayfa<<"\nKİTABIN FİYATI: "<<m_fiyat<<"\nKİTABA VERİLEN PUAN:"<<m_puan<<endl;
		}
		string getad(){return m_ad;}
		int getpuan(){return m_puan;}
		friend int yildiz( Kitap kitap,int okuyanSayisi);
		friend class Yazar;
};


int yildiz( Kitap kitap,int okuyanSayisi){
	if(kitap.getpuan()==5)
	cout<<"OKUYANLARIN HEPSİ "<<kitap.getad()<<" KİTABINI BEĞENMİŞ"<<endl;
	else if(kitap.getpuan()==4){
		cout<<"YAKLAŞIK "<<okuyanSayisi*0.75<<" KİŞİ KİTABI BEĞENMİŞ."<<endl;
	}
	else if(kitap.getpuan()==3){
		cout<<"YAKLAŞIK "<<okuyanSayisi*0.5<<" KİŞİ KİTABI BEĞENMİŞ."<<endl;
	}
	else if(kitap.getpuan()==2){
		cout<<"YAKLAŞIK "<<okuyanSayisi*0.25<<" KİŞİ KİTABI BEĞENMİŞ."<<endl;
	}
	else if(kitap.getpuan()==1){
		cout<<"YAKLAŞIK "<<okuyanSayisi*0.1<<" KİŞİ KİTABI BEĞENMİŞ."<<endl;
	}
	else if(kitap.getpuan()==0){
		cout<<"KİTABI KİMSE BEĞENMEMİŞ."<<endl;
	}
	else
	cout<<"yanlış puan değeri";
}

int main(){
	setlocale(LC_ALL,"TURKISH");
	Kitap kitap("OD",100.99,316,4);
	Yazar yazar("İSKENDER PALA",45,23);
	long int okuyan;
	cout<<kitap.getad()<<" KİTABINI KAÇ KİŞİ OKUMUŞ?\n";
	cin>>okuyan;
	cout<<"*****-----*****\nKİTAP BİLGİLERİ\n*****-----*****\n";
	kitap.kitapBilgileri(yazar);
	cout<<"\nŞİMDİ İSTATİSTİKLERİ GÖRELİM\n";
	cout<<yildiz(kitap,okuyan)<<endl;
	return 0;
}
