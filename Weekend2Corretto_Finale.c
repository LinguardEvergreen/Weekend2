#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();

int main () 

{
        char scelta_iniziale = {'\0'};
        char scelta_finale = {'\0'};
        bool s=false;
        do{
            menu ();
			rewind(stdin);
            scanf ("%c", &scelta_iniziale);
            if(scelta_iniziale=='a'|| scelta_iniziale=='b'|| scelta_iniziale=='c'|| scelta_iniziale=='d')
            	scelta_iniziale=toupper(scelta_iniziale);
            switch (scelta_iniziale)
			{
                case 'A':{
                	moltiplica();
                    break;
                }
                case 'B':{
                    dividi();
                    break;
                    }
                case 'C':{
                    ins_string();
                    break;
                }
                case 'D':{
                    printf("\nGrazie ed alla prossima\n");
                    system("pause");
                    return 0;
                }
                default:{
                    printf("\nHai sbagliato ad inserire la scelta!!");
                    break;
                }
            }
			rewind(stdin);             
            printf("\nCiao, vuoi continuare ad usare i miei servizi?\n\nRispondi Y oppure clicca qualsiasi altro tasto per uscire: ");
            scanf("%c",&scelta_finale);
            if(scelta_finale=='Y' || scelta_finale=='y')
            	s=true;
            else
            	s=false;
        }while(s);
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
        printf("\nSecondo fattore: ");
        scanf ("%d", &b);
        prodotto = a * b;
        printf ("\nIl prodotto tra %d e %d e': %d\n\n", a, b, prodotto);
}


void dividi ()
{
        int  a,b;
        float divisione;
        printf ("\nInserisci il numeratore: ");
        scanf ("%d", &a);
        printf ("\nInserisci il denominatore: ");
        scanf ("%d", &b);
        if(b==0)
        {
        		printf("\nNon puoi dividere un numero per 0!!\n");
        		divisione=0;
        		printf ("\nLa divisione risulta errata: %f\n\n");
		}
        else
        {
        	divisione = (float)a / b;
        	printf ("\nLa divisione tra %d e %d e': %0.2f\n\n", a,b,divisione);
		}
        
}





void ins_string () 
{
	
    char stringa[10];
    rewind(stdin);
	printf ("\nInserisci la stringa: ");
    fgets (stringa, 10 ,stdin);
    printf("\n\nQuesta e' la tua stringa: %s ", stringa);
}
