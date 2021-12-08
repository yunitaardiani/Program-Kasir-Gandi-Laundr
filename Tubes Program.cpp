#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main ()
{


	// Data Admin 
	char username[50],password[50],kode_admin [10], admin;

	//DATA PELANGGAN
	int tanggal, berat;
	float total;
	char nama, alamat,kategori, no_hp;

	//PENGULANGAN DAN PILIHAN LOGIN ADMIN
	char keluar, pilih;
	
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

