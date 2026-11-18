
#ifdef INDEX_INFORMATION
aktprmidx   aktprm 
aktkodtypidx   aktkode aktdata akttype akttgl aktjam 	dup
akttgltypidx   akttgl aktdata akttype aktkode 	dup
aktkod2typid   aktkode2 aktdata akttype akttgl aktjam 	dup
aktbrgtglidx   aktbrg aktdata akttype akttgl aktjam 	dup
aktbukotoidx   aktnobuk aktbukoto akturt 	dup
#endif /* INDEX_INFORMATION */

#define aktdat 	-1400
#define aktprmidx            -1401
#define aktkodtypidx         -1402
#define akttgltypidx         -1403
#define aktkod2typid         -1404
#define aktbrgtglidx         -1405
#define aktbukotoidx         -1406


typedef struct akt { /* Aktivitas Transaksi Umum; 26-10-126  15:44 */
LONG           aktprm;                  /*0,Primary Key*/
TEXT           aktkode[21];             /*4,Kode*/
TEXT           aktkode2[21];            /*25,Kode 2*/
TEXT           aktnobuk[21];            /*46,No Bukti*/
TEXT           aktdata[11];             /*67,Data*/
TEXT           akttype[21];             /*78,Type*/
TEXT           aktbrg[21];              /*99,Kode Barang*/
LONG           akttgl;                  /*120,Tanggal Transaksi*/
double         akttotal;                /*124,Nilai*/
double         aktjml;                  /*132,Jumlah*/
double         akthrg;                  /*140,Harga*/
TEXT           aktket[251];             /*148,Keterangan*/
LONG           aktcrtjam;               /*400,Jam Buat*/
LONG           aktcrttgl;               /*404,Tanggal Buat*/
TEXT           aktcrtusr[21];           /*408,User Buat*/
TEXT           aktlok[21];              /*429,Lokasi*/
TEXT           akttype2[3];             /*450,Type2*/
TEXT           aktdk[2];                /*453,D K Lain*/
TEXT           aktcab[21];              /*455,Cabang*/
TEXT           aktscr[11];              /*476,No Scr*/
LONG           aktversi;                /*488,Versi Ks*/
LONG           aktjam;                  /*492,Jam*/
LONG           akttgl2;                 /*496,Tanggal*/
double         aktjml2;                 /*500,Jumlah 2*/
TEXT           aktbukoto[21];           /*508,Oto No Bukti*/
double         aktdf1;                  /*532,Tambahan Df1*/
double         aktdf2;                  /*540,Tambahan Df2*/
double         aktdf3;                  /*548,Tambahan Df3*/
double         aktdf4;                  /*556,Tambahan Df4*/
double         aktdf5;                  /*564,Tambahan Df5*/
COUNT          akturt;                  /*572,No Urut*/
double         aktdf6;                  /*576,Tambahan Df6*/
double         akthrg2;                 /*584,Hrg Ke 2*/
double         akttotal2;               /*592,Total Ke 2*/
TEXT           aktket2[251];            /*600,Ket2*/
TEXT           aktstr3[71];             /*851,Ket3*/
TEXT           aktstr4[71];             /*922,Ket4*/
TEXT           aktstr1[21];             /*993,Str1*/
TEXT           aktstr2[21];             /*1014,Str2*/
TEXT           aktnama[51];             /*1035,Nama*/
TEXT           akthp[21];               /*1086,No Hp*/
TEXT           aktnama2[51];            /*1107,Nama2*/
TEXT           aktkode3[21];            /*1158,Kode 3*/
TEXT           aktnama3[21];            /*1179,Nama 3*/
TEXT           aktnamlok[51];           /*1200,Nama Gereja*/
}akt_struct;	/*Panjang rekord = 1252 bytes */
