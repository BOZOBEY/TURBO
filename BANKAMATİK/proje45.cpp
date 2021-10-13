#include<stdio.h>

// 10.10.2021 
// ALİ DUHAN BOZ 


int main(){
	   
    int islem ;
	int bakiye = 2500 ;
	int tutar ;
	int sifre = 6363;
	goto bas ; 
	
    bas:
	printf("lutfen sifre giriniz\n"); 
	scanf("%d", &sifre);

	if (sifre == 6363 ){
	
	printf("\nİslemler\n1:Para cekme\n2:Para yatirma\n3:Havale yapma\n4:Bakiye ogrenme\n5:Kart iade\n\n\n");
	printf("ISLEM SECINIZ\n:");
	scanf("%d", &islem);

	
}

    else if (sifre!= 6363){
 	printf("yanlis sifre\n");
 	printf("lutfen tekrar deneyiniz\n");
 	goto bas ;
 }

	switch(islem){
		
		case 1 :
		printf("Bakiyeniz : %d\n", bakiye );
		printf(" Cekilecek tutar\n :");
		scanf("%d", &tutar);
		bakiye -= tutar;
		printf("Bakiyeniz: %d", bakiye);
		printf ("\nisleminiz Basariyla Gerceklesmistir.\n");
			 
    	if(tutar > bakiye );{
	     printf("Bakiye Yetersiz\n");
		 	
     	} 
     	
     	
     	
		  break; 
			
	case 2 :
		
		printf("Bakiyeniz : %d\n", bakiye );
		printf("Yatirilacak Tutar\n :",tutar);
		scanf("%d", &tutar);
		
		bakiye += tutar;
		printf("Bakiyeniz: %d \n", bakiye);
		printf(" \nGirdginiz Tutar Basariyla Hesabiniza Yatirilmistir.\n");
		printf(" Devam Etmek Icin Bir Islem Secin\n");
		goto bas;
		break;
	
	case 3 :
		
		printf("Bakiyeniz : %d\n", bakiye );
		printf(" Havale yapilacak Tutar\n :",tutar);
		scanf("%d", &tutar);
		if(tutar > bakiye );{
		
		 printf("Bakiye Yetersiz\n");
		
		bakiye -= tutar;
		printf(" Kalan Bakiyeniz: %d", bakiye);
		 goto bas;
		break;
		
		}
	case 4 :
			printf("Bakiyeniz : %d\n", bakiye );
			goto bas;
	     	break;
		  

	case 5 :
		  	printf("Kartiniz iade Edildi\n" );
			break;
			
			return 0;
			
	default:
			printf(" bilinmeyen islem\n"); 
		    return 0;
			
			break;


	return 0;
	
}	
	
	

}
	


	
	
