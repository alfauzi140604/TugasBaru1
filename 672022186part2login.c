#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int a,b,total;
float i,j,x,hasilbagi,akar;
int t[5];
double deg2rad(double derajat) {
    return derajat * acos(-1.0) / 180.0;
}

void pingporolansudo(){
    system("cls");
    int pipolando;
    pipolando:
    printf("====================\n");
    printf(" Ping Poro lan Sudo\n");
    printf("====================\n");
    printf("1. Pembagian\n");
    printf("2. Perkalian\n");
    printf("3. Penjumlahan\n");
    printf("4. Pengurangan\n");
    printf("5. Kembali ke Menu Utama\n");
    printf("pilih : ");
    scanf("%d", &pipolando);

    switch(pipolando){
    case 1 :
        pembagian:
        system("cls");
        printf("Masukkan angka pertama = ");
        scanf("%f", &i);
        printf("Masukkan angka kedua = ");
        scanf("%f", &j);
        hasilbagi = i/j;
        printf("Hasil dari %.0f/%.0f adalah %.2f", i, j, hasilbagi);

        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto pembagian;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto pipolando;
        }
        break;

    case 2 :
        perkalian:
        system("cls");
        printf("Masukkan angka pertama = ");
        scanf("%d", &a);
        printf("Masukkan angka kedua = ");
        scanf("%d", &b);
        total = a*b;
        printf("Hasil dari %d x %d adalah %d", a, b, total);

        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto perkalian;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto pipolando;
        }
        break;

    case 3 :
        penjumlahan:
        system("cls");
        printf("Masukkan angka pertama = ");
        scanf("%d", &a);
        printf("Masukkan angka kedua = ");
        scanf("%d", &b);
        total = a+b;
        printf("Hasil dari %d+%d adalah %d", a, b, total);

        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto penjumlahan;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto pipolando;
        }
        break;

    case 4 :
        pengurangan:
        system("cls");
        printf("Masukkan angka pertama = ");
        scanf("%d", &a);
        printf("Masukkan angka kedua = ");
        scanf("%d", &b);
        total = a-b;
        printf("Hasil %d-%d adalah %d", a, b, total);

        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto pengurangan;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto pipolando;
        }
        break;

    case 5 :
        menu:
        main(); break;

    default :
        printf("Pilih yang ada aja");
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto pipolando;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto menu;
        }
    }
}

void sincostan(){
    system("cls");
    int trigono;
    trigono:
    printf("====================\n");
    printf("    Trigonometri\n");
    printf("====================\n");
    printf("1. Sin\n");
    printf("2. Cos\n");
    printf("3. Tan\n");
    printf("4. Kembali ke Menu Utama\n");
    printf("Pilih : ");
    scanf("%d", &trigono);
    double sinus,cosinus,tangen,radian,derajat;

    switch(trigono){
        case 1 :
            system("cls");
            sinus:
            printf("Masukkan derajat Sinus = ");
            scanf("%lf", &derajat);
            radian = deg2rad(derajat);
            sinus = sin(radian);
            printf("Hasil Sinus adalah %lf\n", sinus);

            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto sinus;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto trigono;
            }
            break;

        case 2 :
            system("cls");
            cosinus:
            printf("Masukkan derajat Cosinus = ");
            scanf("%lf", &derajat);
            radian = deg2rad(derajat);
            cosinus = cos(radian);
            printf("Hasil Sinus adalah %lf\n", cosinus);

            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto cosinus;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto trigono;
            }
            break;

        case 3 :
            system("cls");
            tangen:
            printf("Masukkan derajat Tangen = ");
            scanf("%lf", &derajat);
            radian = deg2rad(derajat);
            tangen = tan(radian);
            printf("Hasil Sinus adalah %lf\n", tangen);
                        printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto tangen;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto trigono;
            }
            break;

        case 4 :
            menu:
            main(); break;

        default :
        printf("Pilih yang ada aja");
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto trigono;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto menu;
        }
    }
}

void keliling(){
    system("cls");
    int keliling2;
    keliling2:
    printf("====================\n");
    printf("Keliling Bangun Datar\n");
    printf("====================\n");
    printf("1. Keliling Persegi\n");
    printf("2. Keliling Trapesium\n");
    printf("3. Keliling Layang-Layang\n");
    printf("4. Keliling Lingkaran\n");
    printf("5. Kembali ke Menu Sebelumnya\n");
    printf("Pilih : ");
    scanf("%d", &keliling2);

    int sisi;
    float jari2, atas, bawah, miring, pendek, panjang;
    float kpersegi, ktrapesium, klayang, klingkaran;

    switch(keliling2){
    case 1 :
        system("cls");
        kpersegi:
        printf("Masukkan Panjang Sisi : ");
        scanf("%d", &sisi);
        kpersegi = 4*sisi;
        printf("Keliling Persegi adalah %.2f", kpersegi);
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto kpersegi;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto keliling2;
        }
        break;

    case 2 :
        system("cls");
        ktrapesium:
        printf("Masukkan Panjang Sisi Atas : ");
        scanf("%f", &atas);
        printf("Masukkan Panjang Sisi Bawah : ");
        scanf("%f", &bawah);
        printf("Masukkan Panjang Sisi Miring : ");
        scanf("%f", &miring);
        ktrapesium=atas+bawah+miring*2;
        printf("Keliling Trapesium Adalah %.2f", ktrapesium);
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto ktrapesium;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto keliling2;
        }
        break;

    case 3 :
        system("cls");
        klayang:
        printf("Masukkan Ukuran Sisi Pendek : ");
        scanf("%f", &pendek);
        printf("Masukkan Ukuran Sisi Panjang : ");
        scanf("%f", &panjang);
        klayang=2*pendek+2*panjang;
        printf("Keliling Layang-Layang Adalah %.2f", klayang);
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto klayang;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto keliling2;
        }
        break;

    case 4 :
        system("cls");
        klingkaran:
        printf("Masukkan Panjang Jari-Jari : ");
        scanf("%f", &jari2);
        klingkaran=2*M_PI*jari2;
        printf("Keliling Lingkaran Adalah %f", klingkaran);
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto klingkaran;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto keliling2;
        }
        break;

    case 5 :
        menu:
        menu2();
        break;

    default :
        printf("Pilih yang ada aja");
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto keliling2;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto menu;
        }
    }
}

void luas(){
    system("cls");
    int luas2;
    luas2:
    printf("====================\n");
    printf("Luas Bangun Datar\n");
    printf("====================\n");
	printf("1. Luas Persegi\n");
	printf("2. Luas Trapesium\n");
	printf("3. Luas Layang-layang\n");
	printf("4. Luas Lingkaran\n");
	printf("5. Kembali ke Menu Sebelumnya\n");
    printf("Pilih : ");
    scanf("%d", &luas2);

	int sisi;
    float jari2, atas, bawah , tinggi, diagonal1, diagonal2;
    float lpersegi, ltrapesium, llayang, llingkaran;

    switch (luas2){
		case 1:
		    system("cls");
		    lpersegi:
			printf("Masukkan Panjang Sisi : ");
			scanf("%d", &sisi);
    		lpersegi = sisi*sisi;
			printf("Luas persegi Adalah %.2f", lpersegi);
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto lpersegi;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto luas2;
            }
            break;

		case 2:
		    system("cls");
		    ltrapesium:
			printf("Masukkan Panjang Sisi Atas Trapesium : ");
    		scanf("%f", &atas);
    		printf("Masukkan Panjang Sisi Bawah Trapesium : ");
    		scanf("%f", &bawah);
    		printf("Masukkan Tinggi Trapesium: ");
    		scanf("%f", &tinggi);
			ltrapesium = 0.5*tinggi*(atas+bawah);
			printf("Luas trapesium Adalah %.2f", ltrapesium);
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto ltrapesium;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto luas2;
            }
            break;

		case 3:
		    system("cls");
		    llayang:
			printf("Masukkan Diagonal Panjang : ");
			scanf("%f", &diagonal1);
			printf("Masukkan Diagonal Lebar : ");
			scanf("%f", &diagonal2);
			llayang = 0.5*diagonal1*diagonal2;
			printf("Luas layang-layang Adalah %.2f", llayang);
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto llayang;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto luas2;
            }
            break;

		case 4:
		    system("cls");
		    llingkaran:
			printf("Masukkan Jari-Jari Lingkaran : ");
    		scanf("%f", &jari2);
			llingkaran = M_PI*pow(jari2, 2);
			printf("Luas lingkaran: %.2f", llingkaran);
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto llingkaran;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto luas2;
            }
			break;

        case 5 :
            menu:
            menu2();
            break;

        default :
        printf("Pilih yang ada aja");
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto luas2;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto menu;
        }
    }
}

void volume(){
    system("cls");
    int volume2;
    volume2:
    printf("====================\n");
	printf("Volume Bangun Ruang\n");
	printf("====================\n");
	printf("1. Volume Kubus\n");
	printf("2. Volume Prisma\n");
	printf("3. Volume Limas\n");
	printf("4. Volume Bola\n");
	printf("5. Kembali ke Menu Sebelumnya\n");
    printf("Pilih : ");
    scanf("%d", &volume2);

	int sisi;
    float jbola, tprisma, aprisma, taprisma, tlimas, alimas, talimas, alimas2, sprisma, vprisma3,vprisma4,vlimas3,vlimas4;
    float jprisma, jlimas, dprisma, dlimas, dbola;
    float vkubus, vprisma1, vprisma2, vlimas1, vlimas2, vbola1, vbola2;
    switch (volume2){
		case 1:
		    system("cls");
		    vkubus:
			printf("Masukkan Panjang Sisi Kubus : ");
			scanf("%d", &sisi);
    		vkubus = sisi*sisi*sisi;
			printf("Volume kubus adalah %.2f", vkubus);
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto vkubus;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto volume2;
            }
			break;

		case 2:
		    system("cls");
		    vprisma:
            printf("Masukkan Panjang Sisi : ");
            scanf("%f", &sprisma);
			printf("Masukkan Tinggi Prisma : ");
  			scanf("%f", &tprisma);
    		printf("Masukkan Panjang Alas Prisma: ");
    		scanf("%f", &aprisma);
    		printf("Masukkan Tinggi Alas Prisma : ");
    		scanf("%f", &taprisma);
            printf("Masukkan Jari Jari Alas : ");
    		scanf("%f", &jprisma);
            printf("Masukkan Diamater Alas : ");
    		scanf("%f", &dprisma);
    		vprisma1 = tprisma*(0.5*aprisma*taprisma);
    		vprisma2 = tprisma*(sprisma*sprisma);
            vprisma3 = tprisma * (M_PI * jprisma * jprisma);
			dprisma = dprisma/2;
			vprisma4 = tprisma * (M_PI * dprisma * dprisma );
            printf("Volume Prisma Persegi Adalah %.2f\n", vprisma2);
			printf("Volume Prisma Segitiga Adalah %.2f\n", vprisma1);
            printf("Volume Silinder Jari2 %.2f\n", vprisma3);
			printf("Volume Silinder Diameter %.2f\n", vprisma4);
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto vprisma;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto volume2;
            }
            break;

		case 3:
		    system("cls");
		    vlimas:
			printf("Masukkan Tinggi Limas : ");
    		scanf("%f", &tlimas);
    		printf("Masukkan panjang Sisi limas: ");
    		scanf("%f", &alimas);
            printf("Masukkan Panjang Alas Prisma: ");
    		scanf("%f", &alimas2);
    		printf("Masukkan Tinggi Alas Prisma : ");
    		scanf("%f", &talimas);
    		printf("Masukkan Jari Jari Alas : ");
    		scanf("%f", &jlimas);
            printf("Masukkan Diamater Alas : ");
    		scanf("%f", &dlimas);
			vlimas1 = 0.33 * alimas * alimas * tlimas;
			vlimas2 = 0.33 * tlimas * (0.5*alimas2*talimas);
			vlimas3 = 0.33 * tlimas * (M_PI * jlimas * jlimas);
			dlimas = dlimas/2;
			vlimas4 = 0.33 * tlimas * (M_PI * dlimas * dlimas );
			printf("Volume Limas Segiempat %.2f\n", vlimas1);
			printf("Volume Limas Segitiga %.2f\n", vlimas2);
			printf("Volume Kerucut Jari2 %.2f\n", vlimas3);
			printf("Volume Kerucut Diameter %.2f\n", vlimas4);
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto vlimas;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto volume2;
            }
            break;

		case 4:
		    system("cls");
		    vbola:
			printf("Masukkan jari-jari bola: ");
    		scanf("%f", &jbola);
            printf("Masukkan jDiameter bola: ");
    		scanf("%f", &dbola);
			vbola1=1.33*M_PI*jbola*jbola*jbola;
			dbola=dbola/2;
			vbola2=1.33*M_PI*dbola*dbola*dbola;
			printf("Volume Bola Jari2: %.2f\n", vbola1);
			printf("Volume Bola Diameter: %.2f\n", vbola2);
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto vbola;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto volume2;
            }
			break;

        case 5 :
            menu:
            menu2();
            break;

        default :
        printf("Pilih yang ada aja");
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto volume2;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto menu;
        }
    }
}

void kuadrat(){
    system("cls");
    printf("Masukkan angka yang ingin diakar : ");
    scanf("%f", &x);
    akar=sqrt(x);
    printf("Hasil akar dari %.2f adalah %.2f", x, akar);
}

void menu2(){
    system("cls");
    int bangun;
    printf("==========\n");
    printf("Bangun Ruang/Datar\n");
    printf("==========\n");
    printf("1. Keliling\n");
    printf("2. Luas\n");
    printf("3. Volume Bangun Ruang\n");
    printf("4. Kembali ke Menu Utama\n");
    printf("Pilih = ");
    scanf("%d", &bangun);
    switch(bangun){
        case 1 : keliling();break;
        case 2 : luas(); break;
        case 3 : volume(); break;
        case 4 : main(); break;
    }
}

void main(){
    char user[20]="12345678";
    char pass[20]="alfameta";
    char usr[20],pas[20];
    int p=0, s=0;

    while(p<3){
        printf("Username : ");
        gets(usr);
        printf("Password : ");
        gets(pas);

        if(strcmp(usr,user)==0&&strcmp(pas,pass)==0){
            printf("Akses Dibuka\n");
            menu1();
            break;
        }else{
            system("cls");
            printf("Username atau Password salah\n");
            s++;
            if(s==3){
                printf("Akses Ditolak\n");
            }
        }
        p++;
    }
    system("pause");
    return 0;
}

void menu1(){
    system("cls");
    int pilihan;
    menu:
    printf("====================\n");
    printf("     Kalkulator\n");
    printf("====================\n");
    printf("1. PingPoroLanSudo\n");
    printf("2. SinCosTan\n");
    printf("3. Hitung Keliling dan Luas\n");
    printf("4. Hitung Akar Kuadrat\n");
    printf("5. Exit\n");
    printf("Pilih = ");
    scanf("%d", &pilihan);

    switch(pilihan){
    case 1 : pingporolansudo(); break;
    case 2 : sincostan(); break;
    case 3 : menu2(); break;
    case 4 :
        akar2:kuadrat();
        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto akar2;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto menu;
        }
        break;
    case 5 :
        system("cls");
        keluar:
        printf("Adios");
        break;
    default :
        printf("Tidak ada di pilihan");

        printf("\n");
        printf("ulang?(y/t)");
        scanf("%s", &t);
        if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
            system("cls");
            goto menu;
        }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
            system("cls");
            goto keluar;
        }
    }
}
