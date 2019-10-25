#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main(){

	int n;
	int m;

	scanf("%d %d", &n,&m);
	// printf("%d\n", n);
	// printf("%d\n", m);
	int arrN[n];
	int arrM[m];
	int jml_gabung = n + m;
	int arr_gabung[jml_gabung];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arrN[i]);
		arr_gabung[i]=arrN[i];
	}
	for(i=0;i<m;i++){
		scanf("%d",&arrM[i]);
		arr_gabung[n+i]=arrM[i];
	}

	/*sorting*/
	int swap;
	int c;
	int d;
	for (c = 0 ; c < ( jml_gabung - 1 ); c++){
	    for (d = 0 ; d < jml_gabung - c - 1; d++) {
	      if (arr_gabung[d] > arr_gabung[d+1]){
	        swap       = arr_gabung[d];
	        arr_gabung[d]   = arr_gabung[d+1];
	        arr_gabung[d+1] = swap;
	      }
	    }
	  }

	   for(i=0;i<jml_gabung;i++){
	   	printf("%d ", arr_gabung[i]);
	   }

	int panjang_pesan=0;
	panjang_pesan = arr_gabung[jml_gabung-1]%arr_gabung[0];
	int mulai_pesan = jml_gabung - panjang_pesan;
	if(mulai_pesan%2==0){
		mulai_pesan = (mulai_pesan/2) - 1;
	}else{
		mulai_pesan = (mulai_pesan/2) + 1; 
	}
	mulai_pesan--;
	printf("%d\n",mulai_pesan );
	// printf("%d\n", panjang_pesan);
	// printf("%d\n", arr_gabung[0]);
	// printf("%d\n", arr_gabung[jml_gabung-1]);
	// printf("%d\n", arr_gabung[jml_gabung-1]%arr_gabung[0]);
	for(c = mulai_pesan; c < panjang_pesan+mulai_pesan; c++){
		int asci = (arr_gabung[c]%97) + 32;
		char pesan = asci;
		printf("%c", pesan);
	}



	return 0;
}
