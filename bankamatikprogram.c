#include <stdio.h>


int main(int argc,char **argv){
	
	float kullaniciBakiyesi=17500.0,kullaniciMiktar=0,gunlukLimit=1500.0;
	int islem;
	printf("\t Merhabalar, Hosgeldiniz\n");
	printf("\t Para yatirmak icin 1,  para cekmek icin 2, hesap bakiyesi goruntulemek icin 3'e basiniz");
	scanf("%d",&islem);
	if(islem==1){
		printf("\t Yatirmak istediginiz miktari giriniz:");
		scanf("%f,&kullaniciMiktar");
		if(kullaniciMiktar==0){
			printf("\t Lutfen belirtilen surede bir para miktari giriniz.");
			sleep(5);//5 saniye bekler
			scanf("%f",&kullaniciMiktar);			
		}
		kullaniciBakiyesi+=kullaniciMiktar;
		printf("\t Isleminiz basariyla gerceklesti. Tesekkurler\n");
		printf("\t Yeni Bakiyeniz:%.2f\n",kullaniciBakiyesi);
	}
	else if(islem==2){
		printf("\t Cekmek istediginiz miktari giriniz:");
		scanf("%f",&kullaniciMiktar);
		if(kullaniciMiktar>kullaniciBakiyesi){
				printf("\t Yetersiz Bakiye. \n");
		}
		else if(kullaniciMiktar>gunlukLimit){
			printf("\t Gunluk cekme limitini astiniz. Islem basarisiz.\n");	
		}
		else{
			kullaniciBakiyesi-=kullaniciMiktar;
			printf("\t Isleminiz basariyla gerceklesti. Tesekkurler\n");
			printf("\t Yeni Bakiyeniz:%.2f\n",kullaniciBakiyesi);
		}		
	}
	else if(islem==3){
		printf("\t Mevcut Bakiyeniz:%.2f\n",kullaniciBakiyesi);
	}
	else{
		printf("Yanlis bir islem girdiniz.\n");
 	}

	return 0;
}
	
