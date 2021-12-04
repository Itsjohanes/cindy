/* 
Buatlah pemrograman bahasa C berdasarkan ilustrasi berikut ! 
Pak Yaya membeli buah mangga dari petani sebesar Rp10.000 per kg. 
Kemudian mangga tersebut dijual lagi dengan harga Rp15.000. 
Berapa persen laba atau untung yang diperoleh Pak Yaya 
Contoh Masukan Harga beli (Rp) = 10000 
Harga jual (Rp) = 15000 Contoh Keluaran Persen laba (%) = 50 
*/
#include <stdio.h>

int main(){
	int beli, jual,laba;
	
	printf("==Persen laba yang diperoleh==\n");
	printf("Masukan harga beli mangga per kg = ");
	scanf("%d", &beli);
	printf("Masukan harga jual mangga per kg = ");
	scanf("%d", &jual);
	
	laba = (((jual-beli)*100)/beli);
	
	printf("Harga beli (Rp) = %d", beli);
	printf("\nHarga jual (Rp) = %d", jual);
	printf("\nPersen laba (persen) = %d ", laba);
	
	return 0;
}
