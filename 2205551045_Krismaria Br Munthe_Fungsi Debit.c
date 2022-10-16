#include <stdio.h>


float hasil(float debit, float waktu){
	float volume;
	
	volume = debit*waktu;
	
	return volume;
}

int main(){
	
	float waktu, debit, total;
	char huruf;
	
do{	
	printf("\t\t\t====================================\n");
	printf("\t\t\t======PROGRAM HITUNG KECEPATAN======\n");
	printf("\t\t\t| Masukan Volume\n");
	printf("\t\t\t| >> ");
	scanf("%f", &debit);
	printf("\t\t\t| Masukan Debit\n ");
	printf("\t\t\t| >> ");
	scanf("%f", &waktu);
	
	if(debit >0 && waktu >0){
		total = hasil(debit, waktu);
		printf("\t\t\t====================================\n");
		printf("\t\t\t| Volumennya adalah\n");
		printf("\t\t\t| >> %.2f\n", total);
		printf("\t\t\t====================================\n");
	}else{
		printf("\t\t\t====================================\n");
		printf("\t\t\t|            INPUT ERROR           |\n");
		printf("\t\t\t====================================\n");
	}
	printf("\t\t\t  APAKAH INGIN MENGULANG PROGRAM?\n");
	printf("\t\t\t  >> ");
	scanf("%s", &huruf);
	
	}while(huruf == 'y' || huruf == 'Y');
	
	return 0:
}
