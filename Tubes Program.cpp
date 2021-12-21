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
			
	case (2):
		printf ("\n++----------------------------------------------++\n");
		printf ("++   	  ANDA MEMILIH KATEGORI BIASA		++\n" );
		printf ("++   	  Biaya Kategori Biasa = 10000/kg	++\n");
		printf ("++----------------------------------------------++\n");
		printf ("\n");
		printf ("Masukkan Berat (kg) : ");
		scanf ("%i", &berat);
		total1 = 10000 * berat;
			
			if (berat >=5)
			{
				diskon = 7000;
				total_bayar = 10000*berat-7000;
				printf ("\n");
				printf("\n                  >>>> SELAMAT ANDA MENDAPAT DISKON --> 7000 <<<<      \n");
			}
			else if (berat <5)
			{
				total_bayar = 10000*berat;
				printf ("\n");
				printf("\n                  >>>> ANDA TIDAK MENDAPATKAN DISKON <<<<      \n");
			}
				printf ("\n");
				break;
			
	case (3):
		printf ("\n++----------------------------------------------++\n");
		printf ("++   	  ANDA MEMILIH KATEGORI SETRIKA		++\n" );
		printf ("++   	  Biaya Kategori Setrika = 8000/kg	++\n");
		printf ("++----------------------------------------------++\n");
		printf ("\n");
		printf ("Masukkan Berat (kg) : ");
		scanf ("%i", &berat);
		total1 = 8000 * berat;
			
			if (berat >=5)
			{
				diskon = 5000;
				total_bayar = 8000*berat-5000;
				printf ("\n");
				printf("\n                  >>>> SELAMAT ANDA MENDAPAT DISKON --> 5000 <<<<      \n");
			}
			else if (berat <5)
			{
				total_bayar = 8000*berat;
				printf ("\n");
				printf("\n                  >>>> ANDA TIDAK MENDAPATKAN DISKON <<<<      \n");
			}
				printf ("\n");
				break;
			
	case (4):
		printf("\n\n PILIHAN TIDAK TERSEDIA \n");
		break;
		default:
		break;
			
		 }
				
			
	{
			printf ("|--------------------------------------------------------|");
			printf ("\n");
			printf ("| Total 			: %i \t\t |\n",total1);
			printf ("| Total Bayar			: %.0f \t\t |\n",total_bayar);
			printf ("|--------------------------------------------------------|\n");
			
// Rumus Bayar

			printf ("\n");
			printf ("Masukkan Jumlah Uang Anda	: ");
			scanf ("%f", &bayar);

// Rumus Kembalian

			kembalian = bayar-total_bayar;


			printf ("Bayar : %.0f\n",bayar);
			printf ("Kembalian : %.0f\n",kembalian);
	}



// Output program Menu 1

	system("cls");
	printf("|================= STRUK GANDI LAUNDRY ==================|\n");
	printf("| \t\t\t\t\t\t\t |\n");
	printf("| Nama Admin  		: %s \t |\n", nama_admin);
	printf("| Kode Admin   		: %s \t\t\t\t |\n", kode_admin);
	printf("| Tanggal Pembayaran 	: %02d-%02d-%d \t\t\t |\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
	printf("| \t\t\t\t\t\t\t |\n");
	printf("|--------------------------------------------------------|\n");
	printf("| \t\t\t\t\t\t\t |\n");
	printf("| Nama Pelanggan	: %s \t\t\t |\n", datapengguna.nama);
	printf("| Email Pelanggan	: %s \t\t |\n", datapengguna.email);
	printf("| Alamat Pelanggan	: %s \t\t\t |\n",datapengguna.alamat);
	printf("| \t\t\t\t\t\t\t |\n");
	printf("|--------------------------------------------------------|\n");
	printf("| \t\t\t\t\t\t\t |\n");
	printf("| Pilihan Menu 		: %i \t\t\t\t |\n", pilih);
	printf("| Kategori Cucian 	: %i \t\t\t\t |\n",kategori);
	printf("| Berat (kg)		: %i \t\t\t\t |\n",berat);
	printf("| Total			: Rp. %i \t\t\t |\n",total1);
	printf("| Total Diskon 		: Rp. %.0f \t\t\t |\n", diskon);
	printf("| Total Bayar 		: Rp. %.0f \t\t\t |\n",total_bayar);
	printf("| Bayar			: Rp. %.0f \t\t\t |\n",bayar);
	printf("| Kembalian		: Rp. %.0f \t\t\t |\n",kembalian);
	printf("|========================================================|\n");
	
	
	
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

  
		printf("\n                  ***** TERIMAKASIH TELAH MEMPERCAYAI GANDI LAUNDRY *****      \n");
		
		}
			
	

	else if (pilih==2)	
	{
		
	system("cls");
	printf("|-------------------------------------------------|\n");
	printf("|		  ANNOUCMENT!                     |\n");
	printf("|-------------------------------------------------|\n");
   	printf("|   - Masukkan kode pakaian <spasi> jumlahnya     |\n");  
   	printf("|   - Contoh: 1 2                                 |\n");  
   	printf("|   - Ketik 0 <spasi> 0                           |\n");  
   	printf("|    jika sudah selesai                           |\n"); 
   	printf("|-------------------------------------------------|\n\n");
   	
   	kode:
	printf("\n");   
	printf("***********************************************************\n");  
   	printf("\n            >>> DAFTAR PAKAIAN LAUNDRY <<<                 \n");  
   	printf("\n***********************************************************\n\n");
   	printf("++------------------------------------------------------++\n");  
   	printf("|| Kode Pakaian   	 \t\t || Harga      	||\n");  
   	printf("++------------------------------------------------------++\n");  
   	printf("|| 1) Baju  		 \t\t || Rp. 500  	||\n");  
   	printf("|| 2) Kemeja  		 \t\t || Rp. 800  	||\n");
   	printf("|| 3) Celana Pendek  	\t\t || Rp. 1000	||\n");  
   	printf("|| 4) Celana Panjang 	\t\t || Rp. 1500	||\n"); 
   	printf("|| 5) Topi		\t\t || Rp. 600	||\n");  
   	printf("|| 6) Jaket 		\t\t || Rp. 2000	||\n");  
   	printf("|| 7) Boneka  		\t\t || Rp. 2000	||\n");
   	printf("|| 8) Seprai  		\t\t || Rp. 2500  	||\n");
   	printf("|| 9) Badcover  	\t\t || Rp. 5000  	||\n");
	printf("|| 10) Bantal  		\t\t || Rp. 3000  	||\n");
	printf("|| 11) Selimut  	\t\t || Rp. 3500  	||\n");
	printf("|| 12) Handuk  		\t\t || Rp. 2000  	||\n");
	printf("|| 13) Jas  		\t\t || Rp. 2000  	||\n");
	printf("|| 14) Sweater  	\t\t || Rp. 1500  	||\n");
	printf("|| 15) Celana Jeans  	\t\t || Rp. 3000  	||\n"); 
   	printf("++------------------------------------------------------++\n");  
   	printf ("\n");
   
   
   		do
   		{  
		printf(" Kode Pesanan : ");  
     		scanf("%d %d", &kode, &jml);    
     		total2 = total2+(harga[(kode-1)]) * jml;  
     		if (kode>15)
     		{
     			printf ("\n           >>> KODE PAKAIAN TIDAK TERSEDIA <<< \n");
     			goto kode;
			 }
   		}
   		
   		while(kode != 0 && jml !=0);
   			printf ("---------------------- +\n");  
   			printf(" TOTAL HARGA : %d\n\n", total2);  
   
   
   
// Rumus Bayar
   
	printf ("Masukkan Jumlah Uang Anda : ");
	scanf ("%f", &bayar);

// Rumus Kembalian

	kembalian = bayar-total2;


	printf ("Bayar : %.0f\n",bayar);
	printf ("Kembalian : %.0f\n",kembalian);
			

// Output program Menu 2

  	system("cls");
	printf("|================= STRUK GANDI LAUNDRY =================|\n");
	printf("| \t\t\t\t\t\t\t|\n");
	printf("| Nama Admin  		: %s  \t|\n", nama_admin);
	printf("| Kode Admin   		: %s  \t\t\t\t|\n", kode_admin);
	printf("| Tanggal Pembayaran 	: %02d-%02d-%d  \t\t\t|\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
	printf("| \t\t\t\t\t\t\t|\n");
	printf("|-------------------------------------------------------|\n");
	printf("| \t\t\t\t\t\t\t|\n");
	printf("| Nama Pelanggan	: %s \t\t\t|\n", datapengguna.nama);
	printf("| Email Pelanggan	: %s \t\t|\n", datapengguna.email);
	printf("| Alamat Pelanggan	: %s \t\t\t|\n",datapengguna.alamat);
	printf("| \t\t\t\t\t\t\t|\n");
	printf("|-------------------------------------------------------|\n");
	printf("| \t\t\t\t\t\t\t|\n");
	printf("| Pilihan Menu 		: %i \t\t\t\t|\n", pilih);
	printf("| Total			: Rp. %i \t\t\t|\n",total2);
	printf("| Bayar			: Rp. %.0f \t\t\t|\n",bayar);
	printf("| Kembalian		: Rp. %.0f \t\t\t|\n",kembalian);
	printf("|=======================================================|\n");
	

			
					
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
			
