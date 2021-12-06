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

