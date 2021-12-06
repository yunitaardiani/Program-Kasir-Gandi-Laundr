#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main ()
{


	// Data Admin 
	char username[50],password[50],kode_admin [10], admin;

	//DATA PELANGGAN
	int biaya,tanggal,no_hp,total_bayar,berat,total_berat;
	
	char nama,alamat,kategori;

	//PENGULANGAN DAN PILIHAN LOGIN ADMIN
	char keluar,pilih;
	
	//TANGGAL
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	
	
	
	printf("|   =================== SELAMAT DATANG ==================  |\n");
	printf("|               PROGRAM KASIR GANDI LAUNDRY                |\n");
	printf("============================================================\n");

	printf("============================================================\n");
	printf("|  ==================== LOGIN ADMIN ====================   |\n");
	kembali:
	printf("Username : ");
	scanf("%s", username);
	printf("Password : ");
	scanf("%s", password);
	printf("\n=============================================================\n");

	if(strcmp(username, "gandi_laundry")==0 && strcmp(password,"12345")==0)
	{
		printf("\nID operator 		: 1\n");
		printf("Nama Operator 		: Operator 1\n");
		printf("\nAkses diterima. Selamat Datang Di Program Kasir Gandi Laundry\n");
    	}


   	 else
	{
    	printf("\nUsername dan Password tidak sesuai\n");
    	printf("Tekan Y untuk kembali atau tekan T untuk keluar : ");
	scanf("%s", &pilihan);


		if (pilihan== 'Y' || pilihan== 'y')
		{
			goto kembali;
		}
		else if (pilihan== 'T' || pilihan== 't')
    
		{
			goto keluar;
		}
	}

	printf("\n\nTekan Y untuk kembali atau tekan T untuk keluar : ");
	scanf("%s", &pilihan);

		if (pilihan== 'Y' || pilihan== 'y')
		{
			goto kembali;
		}
		else if (pilihan== 'T' || pilihan== 't')
		{
			goto keluar;
		}

	keluar : 

  
	printf("\nTerimakasih Telah Mempercayai Gandi Laundry!\n"); 
		return 0;

}

