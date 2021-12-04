/*
Buatlah algoritma dalam bahasa C, 
saya akan diberi hadiah jika rangking 1 di kelas, dan naik kelas. 
*/

#include <stdio.h>

int main(){
	int peringkat=1;
	int naik=1;
	
	printf(" === Syarat Mendapatkan Hadiah ====\n\n");
	printf("jika rangking 1 dan naik kelas : %d\n\n", peringkat && naik);
	printf("jika rangking 1 tetapi tidak naik kelas : %d\n\n", peringkat && !naik);
	printf("jika tidak rangking 1 dan naik kelas : %d\n\n", !peringkat && naik);
	printf("jika tidak rangking 1 dan tidak naik kelas : %d\n\n", !peringkat && !naik);
	
	return 0;
}
