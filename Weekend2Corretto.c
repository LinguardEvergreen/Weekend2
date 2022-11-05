#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
        char scelta_iniziale = {'\0'};
        char scelta_finale = {'\0'};
        bool s;
        do{
                menu ();
                do{
                        scanf ("%c", &scelta_iniziale);
                        rewind(stdin);
                        if(scelta_iniziale=='a')
                                scelta_iniziale='A';
                        if(scelta_iniziale=='b')
                                scelta_iniziale='B';
                        if(scelta_iniziale=='c')
                        scelta_iniziale='C';
                        if(scelta_iniziale=='d')
                                scelta_iniziale='D';
                        switch (scelta_iniziale)
                        {
                                case 'A':{
                                        moltiplica();
                                        s=false;
                                        break;
                                }
                                case 'B':{
                                        dividi();
                                        s=false;
                                        break;
                                }
                                case 'C':{
                                        ins_string();
                                        s=false;
                                        break;
                                }
                case 'D':
                                {
                                        printf("\nGrazie ed alla prossima\n");
                                        system("pause");
                                return 0;
                                        }
                                default:{
                                        printf("\nHai sbagliato ad inserire la scelta, riprova: ");
                                        s=true;
                                        break;
                                }
                        }               
                }while(s);
                printf("\nCiao, vuoi continuare ad usare i miei servizi?\n\nRispondi Y oppure clicca qualsiasi altro tasto per uscire: ");
                scanf("%c",&scelta_finale);
                rewind(stdin);
        }while(scelta_finale=='Y' || scelta_finale=='y');
        printf("\nGrazie per avermi usato\n\n");
        system("pause");
        return 0;

}


void menu ()
{
        printf ("\nBenvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
        printf ("\nCome posso aiutarti?\n");
        printf ("\nA >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nD >> Esci\n\nRisposta: ");

}


void moltiplica ()
{
        int  a, b, prodotto;
        
        printf ("\nInserisci i due numeri da moltiplicare\n");
        printf("\nPrimo fattore: ");
        scanf ("%d", &a);
        rewind(stdin);
        printf("\nSecondo fattore: ");
        scanf ("%d", &b);
        rewind(stdin);
        prodotto = a * b;
        printf ("\nIl prodotto tra %d e %d e': %d\n\n", a, b, prodotto);
}


void dividi ()
{
        int  a,b;
        printf ("\nInserisci il numeratore: ");
        scanf ("%d", &a);
        rewind(stdin);
        do{
                printf ("\nInserisci il denominatore: ");
                scanf ("%d", &b);
                rewind(stdin);
                if(b==0)
                printf("\nNon puoi dividere un numero per 0!!\n");
                }while(b==0);

        float divisione = (float)a / b;

        printf ("\nLa divisione tra %d e %d e': %f\n\n", a,b,divisione);
}





void ins_string () 
{
	
     char stringa[10];
     int l;
	printf ("\nInserisci la stringa: ");
    	fgets (stringa, 10 ,stdin);
     stringa[strlen(stringa)-1] = '\0';
     printf("\n\nQuesta e' la tua stringa: %s\n", stringa);
}
