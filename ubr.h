
#ifdef INDEX_INFORMATION
ubrprmidx   ubrprm 
ubrbrgdatkod   ubrbrg ubrdata ubrkode 
ubrotoidx   ubroto 
ubrdatbbmidx   ubrdata ubrnobbm ubrkode ubrnobbm2 	dup
ubrbrgurtidx   ubrbrg ubrnourt 	dup
ubrdaturtidx   ubrdata ubrnourt 	dup
#endif /* INDEX_INFORMATION */

#define ubrdat 	-26600
#define ubrprmidx            -26601
#define ubrbrgdatkod         -26602
#define ubrotoidx            -26603
#define ubrdatbbmidx         -26604
#define ubrbrgurtidx         -26605
#define ubrdaturtidx         -26606


typedef struct ubr { /* Ukuran Barang; 26-10-126  15:44 */
LONG           ubrprm;                  /*0,Key Primary*/
TEXT           ubrdata[11];             /*4,Data*/
TEXT           ubrbrg[21];              /*15,Kode Barang*/
TEXT           ubrkode[21];             /*36,Kode Ukuran*/
TEXT           ubrket[61];              /*57,Keterangan Ukuran*/
TEXT           ubrket2[61];             /*118,Keterangan Ukuran 2*/
TEXT           ubrnobbm[21];            /*179,No Bbm*/
TEXT           ubrnobbm2[21];           /*200,No Bbm*/
LONG           ubrversi;                /*224,Versi Ksystem Jgn Dipakai Yg Lain*/
TEXT           ubroto[21];              /*228,Oto*/
double         ubrawl;                  /*252,Awal*/
double         ubrmsk;                  /*260,Masuk*/
double         ubrklr;                  /*268,Keluar*/
double         ubrakh;                  /*276,Akhir*/
double         ubrhrg;                  /*284,Harga*/
double         ubrnilai;                /*292,Nilai*/
COUNT          ubrnourt;                /*300,No Urut*/
double         ubrjml;                  /*304,Jumlah*/
double         ubrjml2;                 /*312,Jumlah*/
TEXT           ubrscr[11];              /*320,Scr*/
TEXT           ubrtype[11];             /*331,Type 1*/
TEXT           ubrnote[151];            /*342,Note*/
double         ubrdf1;                  /*496,Df 1*/
double         ubrdf2;                  /*504,Df 2*/
double         ubrdf3;                  /*512,Df 3*/
double         ubrdf4;                  /*520,Df 4*/
double         ubrdf5;                  /*528,Df 5*/
TEXT           ubrstr1[21];             /*536,String 1*/
TEXT           ubrstr2[21];             /*557,String 2*/
}ubr_struct;	/*Panjang rekord = 580 bytes */
