
#ifdef INDEX_INFORMATION
spkprmidx   spkprm 
spkdatbuktyp   spkdata spknobuk spktype 	dup
spkasldattyp   spknoasal spkdata spktype 	dup
spktgldatidx   spktgl spkdata 	dup
#endif /* INDEX_INFORMATION */

#define spkdat 	-22800
#define spkprmidx            -22801
#define spkdatbuktyp         -22802
#define spkasldattyp         -22803
#define spktgldatidx         -22804


typedef struct spk { /* Surat Perintah Kerja; 26-10-126  15:44 */
LONG           spkprm;                  /*0,Primary*/
LONG           spkversi;                /*4,Versi Ks*/
TEXT           spkdata[11];             /*8,Data*/
LONG           spktgl;                  /*20,Tanggal*/
TEXT           spknobuk[21];            /*24,Nomor Bukti*/
TEXT           spktype[11];             /*45,Type*/
TEXT           spknoasal[21];           /*56,Nomor Asal*/
TEXT           spkket[750];             /*77,Keterangan*/
TEXT           spkket2[750];            /*827,Keterangan2*/
TEXT           spkket3[750];            /*1577,Keterangan3*/
TEXT           spkreview[750];          /*2327,Review*/
TEXT           spkreview2[750];         /*3077,Review2*/
TEXT           spkreview3[750];         /*3827,Review3*/
TEXT           spkreview4[750];         /*4577,Review4*/
TEXT           spkalamat[101];          /*5327,Alamat*/
TEXT           spkalamat2[101];         /*5428,Alamat2*/
TEXT           spknama[61];             /*5529,Nama*/
TEXT           spknama2[61];            /*5590,Nama2*/
TEXT           spknama3[61];            /*5651,Nama3*/
TEXT           spknama4[61];            /*5712,Nama4*/
TEXT           spkhasil[11];            /*5773,Hasil*/
TEXT           spkhasil2[11];           /*5784,Hasil2*/
TEXT           spkrekom[11];            /*5795,Rekom*/
TEXT           spkcab[21];              /*5806,Cabang*/
TEXT           spktgg[21];              /*5827,Tanggungan*/
TEXT           spktgg2[21];             /*5848,Tanggungan2*/
TEXT           spktgg3[21];             /*5869,Tanggungan3*/
TEXT           spktgg4[21];             /*5890,Tanggungan4*/
TEXT           spkfoto[21];             /*5911,Foto*/
TEXT           spkfoto2[21];            /*5932,Foto2*/
TEXT           spkfoto3[21];            /*5953,Foto3*/
TEXT           spkfoto4[21];            /*5974,Foto4*/
TEXT           spkfoto5[21];            /*5995,Foto5*/
TEXT           spkfoto6[21];            /*6016,Foto6*/
TEXT           spkfoto7[21];            /*6037,Foto7*/
TEXT           spkfoto8[21];            /*6058,Foto8*/
TEXT           spkfoto9[21];            /*6079,Foto9*/
TEXT           spkfoto10[21];           /*6100,Foto10*/
TEXT           spkkat[21];              /*6121,Kategori*/
TEXT           spkkat2[21];             /*6142,Kategori2*/
TEXT           spkkat3[21];             /*6163,Kategori3*/
TEXT           spkkat4[21];             /*6184,Kategori4*/
TEXT           spkkat5[21];             /*6205,Kategori5*/
TEXT           spkkat6[21];             /*6226,Kategori6*/
TEXT           spkkat7[21];             /*6247,Kategori7*/
TEXT           spkkat8[21];             /*6268,Kategori8*/
TEXT           spkkat9[21];             /*6289,Kategori9*/
TEXT           spkkat10[21];            /*6310,Kategori10*/
TEXT           spknohp[21];             /*6331,No Hp*/
TEXT           spknohp2[21];            /*6352,No Hp2*/
TEXT           spknohp3[21];            /*6373,No Hp3*/
TEXT           spknohp4[21];            /*6394,No Hp4*/
TEXT           spknohp5[21];            /*6415,No Hp5*/
TEXT           spknohp6[21];            /*6436,No Hp6*/
TEXT           spknohp7[21];            /*6457,No Hp7*/
TEXT           spknohp8[21];            /*6478,No Hp8*/
TEXT           spknohp9[21];            /*6499,No Hp9*/
TEXT           spknohp10[21];           /*6520,No Hp10*/
TEXT           spkkode[21];             /*6541,Kode*/
TEXT           spkkode2[21];            /*6562,Kode2*/
TEXT           spkkode3[21];            /*6583,Kode3*/
TEXT           spkkode4[21];            /*6604,Kode4*/
TEXT           spkkode5[21];            /*6625,Kode5*/
TEXT           spkkode6[21];            /*6646,Kode6*/
TEXT           spkkode7[21];            /*6667,Kode7*/
TEXT           spkkode8[21];            /*6688,Kode8*/
TEXT           spkkode9[21];            /*6709,Kode9*/
TEXT           spkkode10[21];           /*6730,Kode10*/
COUNT          spklmtg;                 /*6752,Lama Tinggal*/
COUNT          spklmtgbl;               /*6754,Lama Tinggal Bulan*/
COUNT          spklmtgth;               /*6756,Lama Tinggal Tahun*/
COUNT          spklmkrj;                /*6758,Lama Kerja*/
COUNT          spklmkrjbl;              /*6760,Lama Kerja Bulan*/
COUNT          spklmkrjth;              /*6762,Lama Kerja Tahun*/
COUNT          spkjmtgg;                /*6764,Jumlah Tanggungan*/
COUNT          spkjmtgg2;               /*6766,Jumlah Tanggungan2*/
COUNT          spkjmtgg3;               /*6768,Jumlah Tanggungan3*/
COUNT          spkjmtgg4;               /*6770,Jumlah Tanggungan4*/
COUNT          spklmmtr;                /*6772,Lama Miliki Motor*/
COUNT          spklmmtr2;               /*6774,Lama Miliki Motor2*/
COUNT          spklmmtr3;               /*6776,Lama Miliki Motor3*/
COUNT          spklmtgd;                /*6778,Lama Tinggal Di Daerah*/
COUNT          spklmtgd2;               /*6780,Lama Tinggal Di Daerah2*/
COUNT          spklmtgd3;               /*6782,Lama Tinggal Di Daerah3*/
LONG           spktglft;                /*6784,Tanggal Foto*/
LONG           spktglft2;               /*6788,Tanggal Foto2*/
LONG           spktglft3;               /*6792,Tanggal Foto3*/
LONG           spktglft4;               /*6796,Tanggal Foto4*/
LONG           spktglft5;               /*6800,Tanggal Foto5*/
LONG           spktglft6;               /*6804,Tanggal Foto6*/
LONG           spktglft7;               /*6808,Tanggal Foto7*/
LONG           spktglft8;               /*6812,Tanggal Foto8*/
LONG           spktglft9;               /*6816,Tanggal Foto9*/
LONG           spktglft10;              /*6820,Tanggal Foto10*/
LONG           spkjam;                  /*6824,Jam*/
LONG           spkjam2;                 /*6828,Jam2*/
LONG           spkjam3;                 /*6832,Jam3*/
LONG           spkjam4;                 /*6836,Jam4*/
LONG           spkjam5;                 /*6840,Jam5*/
LONG           spkjam6;                 /*6844,Jam6*/
LONG           spkjam7;                 /*6848,Jam7*/
LONG           spkjam8;                 /*6852,Jam8*/
LONG           spkjam9;                 /*6856,Jam9*/
LONG           spkjam10;                /*6860,Jam10*/
double         spkgaji;                 /*6864,Gaji*/
double         spkssgaji;               /*6872,Sisa Gaji*/
double         spkjrk;                  /*6880,Jarak*/
double         spkjrk2;                 /*6888,Jarak2*/
double         spkjrk3;                 /*6896,Jarak3*/
double         spkjrk4;                 /*6904,Jarak4*/
double         spkjrk5;                 /*6912,Jarak5*/
double         spkjrk6;                 /*6920,Jarak6*/
double         spkjrk7;                 /*6928,Jarak7*/
double         spklat;                  /*6936,Lat*/
double         spklat2;                 /*6944,Lat2*/
double         spklat3;                 /*6952,Lat3*/
double         spklat4;                 /*6960,Lat4*/
double         spklat5;                 /*6968,Lat5*/
double         spklat6;                 /*6976,Lat6*/
double         spklat7;                 /*6984,Lat7*/
double         spklat8;                 /*6992,Lat8*/
double         spklon;                  /*7000,Lon*/
double         spklon2;                 /*7008,Lon2*/
double         spklon3;                 /*7016,Lon3*/
double         spklon4;                 /*7024,Lon4*/
double         spklon5;                 /*7032,Lon5*/
double         spklon6;                 /*7040,Lon6*/
double         spklon7;                 /*7048,Lon7*/
double         spklon8;                 /*7056,Lon8*/
TEXT           spknote[3000];           /*7064,Note*/
}spk_struct;	/*Panjang rekord = 10064 bytes */
