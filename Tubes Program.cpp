#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main ()
{

//struct user berisi data pengguna
struct User
	{
    char nama[30];
    char email[30];
    char username[30];
    char password[30];
    char alamat[30];	 
	};

	// Data Admin 
	char nama_admin[50],password_admin[50],kode_admin [10], admin;

	//DATA PELANGGAN
	int tanggal, berat, total1;
	float total_bayar, diskon, bayar, kembalian;
	char kategori;
	
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
	scanf("%s", nama_admin);
	printf(" Password : ");
	scanf("%s", password_admin);
	printf("=========================================================\n");
	
        if(strcmp(nama_admin,"gandi1")==0 && strcmp(password_admin,"admin1")==0){
        	strcpy(nama_admin, "Ni Luh Yunita Ardiani");
        	strcpy(kode_admin, "1");
		
		
        	printf("\n                  >>>> LOGIN BERHASIL! <<<<      \n");
		
        } else if(strcmp(nama_admin,"gandi2")==0 && strcmp(password_admin,"admin2")==0){
            strcpy(nama_admin, "Ni Kadek Intan Diana Putri");
            strcpy(kode_admin, "2");
			
            printf("                   >>>> LOGIN BERHASIL! <<<<      \n");
       }
       
       
    else
	{
    printf("Mohon maaf, Username dan Password anda Salah!\n");
    printf("Tekan Y untuk kembali atau tekan T untuk keluar : ");
		scanf("%s", &pilih);


		if (pilih== 'Y' || pilih== 'y'){
			goto kembali;
		}
		else if (pilih== 'T' || pilih== 't')
		{
			goto keluar;
		}
		}
	
	//	 Registrasi & login pelanggan
    struct User datapengguna;
    int pilihan;
    char nama[30];
    char email[30];
    char username[30];
    char password[30];
    char alamat[30];

    menu:
    system("cls");
    printf("\n==================================|");
    printf("\n  Selamat Datang Di Gandi Laundry |");
    printf("\n==================================|");
    printf("\n    Silahkan Pilih Menu           |");
    printf("\n==================================|");
    printf("\n1. Registrasi                     |");
    printf("\n2. Login                          |");
	printf("\n==================================|");
    
    printf("\nmasukan pilihan Anda: ");
    scanf("%d",&pilihan);
    
    switch (pilihan)
    {
    case 1:
       system ("cls");
        printf("\n==============================|");
	printf("\n         Registrasi           |");
	printf("\n==============================|");
        printf("\nSilahkan Masukan Data  :  |");
        printf("\n==============================|");
        printf("\nmasukan nama: ");
        scanf("\n%[^\n]", &datapengguna.nama);
		    
		    
		    
	printf("\nmasukan email: ");
        scanf("\n%[^\n]", &datapengguna.email);
        
        printf("\nmasukan username: ");
        scanf("\n%[^\n]", &datapengguna.username);
        

        printf("\nmasukan password: ");
        scanf("\n%[^\n]", &datapengguna.password);
        
         printf("\nmasukan alamat: ");
        scanf("\n%[^\n]", &datapengguna.alamat);
       
       
		

        printf("\nakun anda berhasil di daftarkan\n");
        printf("\nKlik Enter Untuk Kembali Ke Menu");
       	
       	
       
        pilihan = 0;
        goto menu;


        break;
    case 2:
    	system("cls");
    	printf("\n=============================|");
    	printf("\n        Gandi Laundry         |");
    	printf("\n                             |");
    	printf("\n=============================|");
    	printf("\n       Silahkan Login        |");
    	printf("\n                             |");
    	printf("\n=============================|");
        printf("\nmasukan username: ");
        scanf("\n%[^\n]", &username);
        printf("\nmasukan password: ",&password);
        scanf("\n%[^\n]", &password);

        if (strcmp(datapengguna.username,username) == 0 && strcmp(datapengguna.password,password) == 0)
        {
          printf("\nanda berhasil Login");
          system ("cls");
          printf("\n==========================|");
        
        }else
        {
            printf("\nAnda tidak berhasil Login\n");
            printf("\nSilahkan ENTER untuk kembali ke MENU!");
            pilihan = 0;
        	goto menu;
            
        }



	// Menu Laundry
	system("cls");
	printf("\n|================ PILIHAN MENU =================|\n");
	printf("|Menu Lundry : 				\t|\n");
	printf("|\t1.Kiloan 			\t|\n");
	printf("|\t2.Satuan 			\t|\n");
        printf("|===============================================|\n");
	printf("\nSilahkan Pilih Menu 	: ");
	scanf("%i", & pilih);
	
	
	if (pilih == 1)
	{
	kategori:
        printf("\n");
        printf("\n|===============================================|\n");
	printf("|Kategori Cucian :				|\n");
	printf("|\t1.Kilat					|\n");
	printf("|\t2.Biasa					|\n");
	printf("|\t3.Setrika				|\n");
    	printf("|===============================================|\n");
	printf("\nMasukkan kategori cucian : ");
	scanf("%i", & kategori);
	
	
	system("cls");
	switch (kategori)
	{
	case (1):
	printf ("\n++----------------------------------------------++\n");
	printf ("++   	  ANDA MEMILIH KATEGORI KILAT		++\n" );
	printf ("++   	  Biaya Kategori Kilat = 15000 		++\n");
	printf ("++----------------------------------------------++\n");
	printf ("\n");
	printf ("Masukkan Berat (kg) : ");
	scanf ("%i", &berat);
	total1 = 15000 * berat;
	if (berat >=5)
	{
	diskon = 10000;
	total_bayar = 15000*berat-10000;
	printf ("\n");
	printf("\n                  >>>> SELAMAT ANDA MENDAPAT DISKON --> 10000 <<<<      \n");
	}
	else if (berat <5)
	{
	total_bayar = 15000*berat;
	printf ("\n");
	printf("\n                  >>>> ANDA TIDAK MENDAPATKAN DISKON <<<<      \n");
	}
	printf ("\n");
	break;
			
			
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
}
}		
			
