
#ifdef INDEX_INFORMATION
bhsprmidx   bhsprm 
bhskodidx   bhskode 
bhsotoidx   bhsoto 
#endif /* INDEX_INFORMATION */

#define bhsdat 	-4600
#define bhsprmidx            -4601
#define bhskodidx            -4602
#define bhsotoidx            -4603


typedef struct bhs { /* Bahasa Judul/keterangan; 26-10-126  15:44 */
LONG           bhsprm;                  /*0,Key Primary*/
TEXT           bhsdata[11];             /*4,Data*/
TEXT           bhstype[3];              /*15,Type*/
TEXT           bhskode[101];            /*18,Kode*/
LONG           bhstgl;                  /*120,Tanggal*/
LONG           bhsjam;                  /*124,Jam*/
TEXT           bhsketina[151];          /*128,Keterangan Indonesia*/
TEXT           bhsketeng[151];          /*279,Keterangan English*/
TEXT           bhsprog[21];             /*430,Kode Programer*/
LONG           bhsversi;                /*452,Versi Ks*/
TEXT           bhsprt[5];               /*456,No Prt Plg*/
TEXT           bhskodawl[28];           /*461,Kode Awal*/
TEXT           bhsoto[21];              /*489,Oto*/
TEXT           bhsusrcrt[21];           /*510,User Buat*/
LONG           bhstglcrt;               /*532,Tanggal Buat*/
TEXT           bhskdfont[21];           /*536,Kode Warna*/
TEXT           bhsfont1[91];            /*557,Font Depan*/
TEXT           bhsfont2[51];            /*648,Font Belakang*/
TEXT           bhsketman[151];          /*699,Keterangan Mandarin*/
TEXT           bhsketpin[151];          /*850,Keterangan Pinyin*/
}bhs_struct;	/*Panjang rekord = 1004 bytes */
