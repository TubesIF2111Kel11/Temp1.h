void init_chance(chances *ch) {
	strcpy((*ch)[1].Type, "Masuk Penjara");
	strcpy((*ch)[2].Type, "Tiket Bus");
	strcpy((*ch)[3].Type, "Tukar Gedung");
	strcpy((*ch)[4].Type, "Mini Game TicTacToe");
	}
	
void chance(chances ch) {
	// Kamus Lokal
	int x;
	// Algoritma
	x = rand() & 4;
	switch (x) {
		case 1	:	// bagian board
		case 2	:
		case 3	:
		case 4	:
		default	:
		}
	}
	
void undian(Address *P) {
	char q[5];
	char w[2][4];
	int x,y;
	bool b,c ;
	scanf("%s", &q);
	y = 1;
	strcpy(w[1] , "Head");
	strcpy(w[2], "Tail");
	c = 0;
	b = 0;
	do {
		printf("Taruhan Anda (Head/Tail) : ");
		scanf("&s", &q);
		if ((strcmp(q, w[1]) != 1) && (strcmp(q, w[2]) != 1)) {
			// c = 1;
			printf("Input salah! Mohon ulangi! (case sensitive)\n");
			}
		else {
			x = rand() % 2;
			y += 1;
			if ((strcmp(q, w[1]) != 1) || (strcmp(q, w[2]) != 1)) {
				b = 1;
				y = 1;
				}
			}
		}
	while ((y != 4) && (!(b)));
	balance(P) *= y;
	}
	
void printfcomma2 (longint n) {
    if (n < 1000) {
        printf ("%d", n);
        return;
		}
    printfcomma2 (n/1000);
    printf (",%03d", n%1000);
	}

void printfcomma (longint n) {
    if (n < 0) {
        printf ("-");
        n = -n;
		}
    printfcomma2 (n);
	}
