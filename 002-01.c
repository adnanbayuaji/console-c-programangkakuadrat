/*PROGRAM Angka Kuadrat*/
//Berisi fungsi Kuadrat untuk mencari nilai kuadrat dan menampilkan hasilnya ke layar

#include<stdio.h>
#include<math.h>

/*DEKLARASI PROTOTYPE*/
float Kuadrat(float n);															//fungsi

main()
{
	/*DEKLARASI*/							
	float n;																	//masukkan nilai										
	char ulangi;																//ulangi untuk perulangan
												
	/*DESKRIPSI*/
	do
	{
		system("cls");															//bersihkan layar
		printf("Angka Kuadrat");
		printf("\n\nMasukkan nilai : ");
		scanf("%f", &n);														//masukkan nilai
		printf("\nHasil kuadrat dari %.0f x %.0f adalah: %.0f", n, n, Kuadrat(n));
		printf("\n\nUlangi [y/t]? ");
		scanf ("%s", &ulangi);													//'y' jika ingin mengulangi
	}
	while(ulangi=='y'||ulangi=='Y');			
}

/*Fungsi Kuadrat*/
/*mengembalikan nilai Kuadrat bertipe integer*/
float Kuadrat(float n)															//fungsi mengembalikan nilai float
{
	/*DEKLARASI*/	
	
	/*DESKRIPSI*/
	return pow(n,2);															//mengembalikan nilai 
}
