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
