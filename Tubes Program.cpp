#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main ()
{


	// Data Admin 
	char username[50],password[50],kode_admin [10], admin;

	//DATA PELANGGAN
	int tanggal, berat, total1;
	float total_bayar, diskon, bayar, kembalian;
	char no_hp[15];
	char nama[50], alamat[50], kategori;
	
	// Harga Pakaian Laundry
	int jml, total2 = 0;
	int kode, harga [15] = {500,800,1000,1500,600,2000,2000,2500,5000,3000,3500,2000,2000,1500,3000};

	//PENGULANGAN DAN PILIHAN LOGIN ADMIN
	char keluar, pilih;
	
	//TANGGAL
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	
	
	printf("| ===================== SELAMAT DATANG =================== |\n");
	printf("|               PROGRAM KASIR GANDI LAUNDRY                |\n");
	printf("| ======================================================== |\n");

	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf("********************** LOGIN ADMIN **********************\n");
	kembali:
	printf(" Username : ");
	scanf("%s", username);
	printf(" Password : ");
	scanf("%s", password);
	printf("=========================================================\n");
	
        if(strcmp(username,"gandi1")==0 && strcmp(password,"admin1")==0){
        	strcpy(username, "Ni Luh Yunita Ardiani");
        	strcpy(kode_admin, "1");
		
		
        	printf("\n                  >>>> LOGIN BERHASIL! <<<<      \n");
		
        } else if(strcmp(username,"gandi2")==0 && strcmp(password,"admin2")==0){
            strcpy(username, "Ni Kadek Intan Diana Putri");
            strcpy(kode_admin, "2");
			
            printf("                   >>>> LOGIN BERHASIL! <<<<      \n");
       }
   	
	else 
	 {
	 	printf("Mohon Maaf UUsername dan Password anda salah\n");
	 	printf("Tekan Y untuk kembali atau tekan T untuk  keluar :");
	 	scanf ("%s",&pilih);
	 	if (pilih == 'Y'|| pilih=='y'){
	 		goto kembali ;
		 }
		 else if (pilih== 'T'|| pilih=='t'){
		 	goto keluar;
		 }
	 }
	 	
	 	printf ("\n Masukkan Nama Pelanggan :");
	 	scanf ("%s",& nama);
	 	printf("\n Masukkan Alamat Pelanggan :");
	 	scanf ("%s",& alamat);
	 	
	
	
		printf("\n\nTekan Y untuk kembali atau tekan T untuk keluar : ");
		scanf("%s",&pilih);

		if (pilih== 'Y' || pilih== 'y')
		{
			goto kembali;
		}
		else if (pilih== 'T' || pilih== 't')
		{
			goto keluar;
		}

 		 keluar :
  	
printf("\n                  ** TERIMAKASIH TELAH MEMPERCAYAI GANDI LAUNDRY **      \n");
  
   
   return 0;
}

