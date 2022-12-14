#include <stdio.h>      //Ai fini dell'esecuzione dell'eseguibile, ? consigliato mettere la libreria <stdlib.h> per inserire la funzione system("pause")

void menu ();   //Dichiarazione della funzione menu() di tipo void, ossia alla fine della funzione, non restituisce nessun valore
void moltiplica ();     //Dichiarazione della funzione moltiplica () di tipo void
void dividi (); //Dichiarazione della funzione dividi() di tipo void
void ins_string();      //Dichiarazione della funzione ins_string() di tipo void


int main ()     //Chiamata della funzione principale main() di tipo int

{
        char scelta = {'\0'};   //Dichiarazione della variabile scelta di tipo char  ed inizializzazione a NULL
        menu ();        //Chiamata della funzione menu()
        scanf ("%d", &scelta);  //Inserimento della scelta data dal men? errata poich? la variabile ? stata dichiarata come carattere mentre nello scanf viene inserita come un intero

        switch (scelta)         //Utilizzo della funzione switch per gestire la casistica della scelta senza andare a occuparsi di possibile errore dell'utente
        {
                case 'A':       //In caso di input dell'utente del carattere A, esegue la funzione moltiplica()
                moltiplica();
                break;  //Comando per uscire dallo switch evitare la lettura dagli altri case
                case 'B':       //In caso di input dell'utente del carattere B, esegue la funzione dividi()
                dividi();
                break;
                case 'C':       //In caso di input dell'utente del carattere C, esegue la funzione ins_string()
                ins_string();
                break;
        }

return 0;       //Restituisce valore 0 alla funzione main e termina il programma. Per pura scelta grafica e per una lettura migliore, ? consigliabile indentarlo

}


void menu ()    //Questa funzione menu() serve per stampare 3 stringe in modo tale che l'utente possa avere un'interfaccia. Consigliabile aggiungere una 4 scelta in cui viene data l'opzione di uscire dal programma 
{
        printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");   //Correggere assitente in assistente
        printf ("Come posso aiutarti?\n");
        printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()      //Questa funzione moltiplica () serve a moltiplicare 2 numeri dati in input.
{
        short int  a,b = 0;     //Dichiara 2 variabili, a e b, di tipo short inizializzando b a 0. Correggerei dichiarando semplicemente a e b come 2 variabili int
        printf ("Inserisci i due numeri da moltiplicare:");
        scanf ("%f", &a);       //Inserimento errato del primo numero poich? %f fa riferimento alle variabili di tipo float
        scanf ("%d", &b);       //Inserimento errato del secondo numero poich? %d fa riferimento alle veriabili di tipo int
                                //Aggiungerei 2 printf per facilitare la comprensione dell'inserimento dei numeri
                                //Dichiarando a e b come 2 variabili int, dentro gli scanf andrei ad inserire %d

        short int prodotto = a * b;     //Dichiarazione di tipo int ed assegnazione di prodotto alla moltiplicazione tra a e b. Correggerei dichiarandolo int

        printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()  //Questa funzione dividi() serve a dividere 2 numeri dati in input
{
        int  a,b = 0;   //Dichiarazione di due variabili intere inizializzando b a 0.
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
        printf ("Inserisci il denumeratore:");          //Stampa errata poich? si scrive denominatore
        scanf ("%d", &b);

        int divisione = a % b;  //Dichiarazione ed assegnazione completamente sbagliata poich? dichiara la variabile divisione come un intero, senza considerare una possibile soluzione con la virgola
                                //e soprattutto l'assegnazione ? sbagliata poich? non fa la divisione la il modulo tra a e b, il quale serve a calcolare il RESTO di una funzione. 
                                //Per correggerlo si deve dichiarare divisione come un float e scrivere l'assegnazione nel seguente modo: a/b;

        printf ("La divisione tra %d e %d e': %d", a,b,divisione);      //Di conseguenza, la stampa della divisione deve essere cambiata da %d a %f
}





void ins_string ()      //Questa funzione ins_string() serve per l'inserimento di una stringa di grandezza 10
{
        char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}
