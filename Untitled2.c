#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //Main Section
{
    ///Main Screen S-1&2
    int inp1; //glavni ekran, ekran koji se dobija na pokretanju programa

    printf("\nIzaberite jednu od dvije opcije:\n\n");
    printf("[1] Pokrenuti Igricu\n");
    printf("[2] Izlaz\n");
    scanf("%d", &inp1);

    if (inp1==1)
    {   system("cls");
        printf("\nPokrenuli ste igricu.\n\n"); //Info sceen za koristenje programa
        printf("Prilikom odgovaranja koristite brojeve koji su naznaceni prije vaseg izbora.\n\n\n");
        printf("(pritisnite enter da nastavite)");
        getchar();  //getchar za sljedci dio koda
    }
    else
    {   if (inp1==2)  //Izlaz iz programa
        {
            exit(0);
        }
    }

    /// Unos imena S-3. Svrha ovog djela je spremanje imena koju ce korisnik unijeti

    char ime_karaktera[15]; //[15] je ovdje umjesto & u scanf fukciji, 15 je max duzina stringa

    getchar(); //dupi getchar za nastavak koda, kod ne radi samo sa jednim getchar, printf bi se izbriso u if (inp1==1)
    system("cls");
    printf("\nUnesite ime karaktera: ");
    scanf("%s", ime_karaktera);

    ///Part 1, Switch 1.

    int inp3, inp4, inp5, inp6;
    int novac;
    novac=35;

    system("cls");
    printf("\nProbudili ste se u mracnoj slijepoj ulici, ne sjecate se nicega, cak ni svog imena.\n\n");
    printf("[1] Probajte pronaci novacnik i provjeriti sta je u njemu.\n");
    printf("[2] Razgledajte okolo sebe.\n");

    fflush(stdin); //rijesi problem preskakanja scanf

    scanf("%d", &inp3);

    switch (inp3)//Switch 1
    {
    case 1: //Novcanik l1
        //Step 2a-----------
        system("cls");
        printf("\nPonasli ste svoj novcanik, u njemu je %d KM i vasa licna karta, vase ime je %s, dok ste stavljali novcanik u dzep culi ste neki cudan zvuk, da li ce te:\n\n", novac, ime_karaktera);
        printf("[1] Probati pobjeci.\n");
        printf("[2] Ostati i viditi sta proizvodi taj zvuk.\n");
        scanf("%d", &inp4);

        switch (inp4) //Switch 1a
              {case 1: //Probati pobjeci l2
                     system("cls");

                     getchar();
                     system("cls");
                     printf("\nOkrenuli ste se i poceli trcati, ispred vas se nalazi zid. Zvuk vam se sve vise priblizava.\n\n\n\n");
                     printf("(pritisnite enter da nastavite)");

                     getchar();
                     system("cls");
                     printf("\nPrimjetili ste zelena vrata sa vase desne strane, crvena sa lijeve strane. Koja ce te vrata probati?\n\n");
                     printf("[1] Zelena.\n"); //<----  Ovaj dio koda ne radi > switch (inp5), case 1.
                     printf("[2] Crvena.\n");
                     scanf("%d", &inp5);
                     getchar();//Napomena getchar nemoze ici izmedju printf i scanf, rezulat bude "insert character-infinite".

                               switch (inp5) //Switch 1b, Pobjeci-Vrata
                              {case 1: //Zelena l3
                                        system("cls");
                                        printf("\nZelena vrata su otkljucana, uspjeli ste uci u zgradu"); //Jedini izlaz is switcha
                                        break;

                               case 2: //Crvena l3
                                        system("cls");
                                        printf("\nDosli ste do crvenih vrata, probali ste ih otvoriti, ali ona su bila zakljucana. Culi ste kako vam se zvuk sve vise priblizava, okrecete se da vid...\n");
                                        printf("\nKraj\n");
                                        getchar();

                                        exit(0);
                                        break;
                                        } //Kraj Switcha 1b

               case 2: //Ostajanje l2
                      system("cls");
                      printf("\nNiste kukavica, stali se da vidite sta proizvodi taj zvuk, culi ste kako vam se zvuk sve vise priblizava. Niste mogli vjerovati sta vidite, probali ste pobjeci ali bilo je kasno.\n\n");
                      printf("Kraj.\n");
                      getchar();
                      exit(0);}// Kraj switcha 1a
                      break;

   case 2://Razgledajte okolo sebe L1, Switch 1 slucaj 2
       system("cls");
       printf("\nVidite dvoja vrata, crvena i zelena. Koja ce te izabrati?\n\n");
       printf("[1] Crvena.\n");
       printf("[2] Zelena.\n");
       scanf("%d", &inp6);



                switch (inp6)//Slucaj 2 L2
               {case 1:
                        getchar();//? Zasto getchar ovjde sprecava preskakanje sljedecg printf, da li radi zajedno sa scanf, pa broj unesen pod scanf izvrsi i getcahr?
                        system("cls");
                        printf("\nDosli ste do crvenih vrata, probavate ih otvoriti, ali ona su zakljucana.\n\n\n\n");
                        printf("(pritisnite enter da nastavite)");

                        getchar();
                        system("cls");
                        printf("\nKrenuli ste prema zelenim vratima.\n\n\n\n");
                        printf("(pritisnite enter da nastavite)");

                        getchar();
                        system("cls");
                        printf("\nDosli ste do zelenih vrata, probali ste bravu, vrata su otkljucana.\n\n\n\n");
                        printf("(pritisnite enter da nastavite)");

                        getchar();
                        system("cls");
                        printf("\nKad ste usli u zgradu culi ste neki cudan zvuk napolju, zatvorili ste vrata.\n\n\n\n");
                        printf("(pritisnite enter da nastavite)");
                        getchar();


                        break;
                case 2:
                        getchar();//isto vrijedi i za ovo ovdje, zasto getchar u donjem djelu brise ovaj kod?, ako nema drugi getchar ovjdeili direktno ispod printf?
                        system("cls");
                        printf("\nKrenuli ste prema zelenim vratima.\n\n\n\n");
                        printf("(pritisnite enter da nastavite)");

                        getchar();
                        system("cls");
                        printf("\nDosli ste do vrata, probali ste ih otvoriti, bila su otkljucana. Usli ste u zgradu.\n\n\n\n");
                        printf("(pritisnite enter da nastavite)");
                        getchar();
                        break;}
   }
   //Kraj switcha 1, switch ima dva izlaza i obadva izlaza su ista (Ista vrata)

    ///Part 2, Switch 2

    int ir1, ir2;

    system("cls");
    printf("\nHodate kroz zgradu, zgrada izgleda napusteno, probavate naci drugi izlaz.\n\n\n\n");
    printf("(pritisnite enter da nastavite)");
    getchar();
    /////////
    system("cls");
    printf("\nPrimjetili ste dvije mracne sobe sa vase lijeve strane i hodnik sa desne strane, da li zelite provjeriti imaju li u sobama izlazna vrata, ili da li zelite provjetiti sta je na kraju hodnika?\n\n");
    printf("[1] Provjeri sobe.\n");
    printf("[2] Nastavi hodati kroz hodnik.\n");
    scanf("%d", &ir1);

    switch (ir1)
    {
    case 1:
        getchar();
        system("cls");
        printf("\nUsli ste u prvu sobu.\n\n\n\n");
        printf("(pritisnite enter da nastavite)");

        getchar();
        system("cls");
        printf("\nNiste mogli skoro nista viditi, pogledali ste okolo sebe.\n\n\n\n");
        printf("(pritisnite enter da nastavite)");


        getchar();
        system("cls");
        printf("\nVidili ste prasnjavu lampu pokraj vas.\n\n\n\n");
        printf("(pritisnite enter da nastavite)");

        getchar();
        system("cls");
        printf("\nUzeli ste lampu i pogledali okolo.\n\n\n\n");
        printf("(pritisnite enter da nastavite)");

        getchar();
        system("cls");
        printf("\nNiste mogli naci nista u prvoj sobi. Krenuli ste u drugu sobu.\n\n\n\n");
        printf("(pritisnite enter da nastavite)");
        getchar();

        system("cls");
        printf("\nU drugoj sobi nema izlaza, ali nasli ste 20 KM na stolu. Da li ce te ih uzeti ili ostviti?\n\n\n\n");
        printf("[1] Uzmi.\n");
        printf("[2] Ostavi.\n");
        scanf("%d", &ir2);
              switch (ir2)
                           {
                              case 1://Pare uzete
                                getchar();
                                system("cls");
                                printf("\nUzeli ste pare i krenuli kroz hodnik.\n\n\n\n");
                                printf("(pritisnite enter da nastavite)");

                                getchar();
                                system("cls");
                                printf("\nNa kraju ste hodnika, cujete da neko hoda u sobi ispred vas.\n\n\n\n");
                                printf("(pritisnite enter da nastavite)");

                                getchar();
                                system("cls");
                                printf("\nProbali ste se sakriti, ali niste bili dovoljno brzi. Neki cudan covjek vas je vidio i krenuo prema vama.\n\n\n\n");
                                printf("(pritisnite enter da nastavite)");

                                system("cls");
                                printf("(pritisnite enter da nastavite)");

                                getchar();
                                printf("\n-Ko si ti?-\n");

                                getchar();
                                printf("Ja sam %s.\n", ime_karaktera);

                                getchar();
                                printf("-Daj mi 50 KM ako hoces da izadjes odavde.-\n");

                                getchar();
                                printf("Evo.\n");

                                getchar();
                                printf("-Vrata su ti tu, hajde izlazi.-\n\n\n\n");

                                getchar();
                                system("cls");
                                printf("\nIzasli ste napolje, vidili ste taksi, pozvali ste ga i otisli kuci.\n\n\n\n");
                                printf("(pritisnite bilo koje dugme za izlaz)");
                                getchar();
                                exit(0);
                                break;

                             case 2: //Pare ostavljene

                                getchar();
                                system("cls");
                                printf("\nKrenuli ste kroz hodnik.\n\n\n\n");
                                printf("(pritisnite enter da nastavite)");

                                getchar();
                                system("cls");
                                printf("\nNa kraju ste hodnika, cujete da neko hoda u sobi ispred vas.\n\n\n\n");
                                printf("(pritisnite enter da nastavite)");

                                getchar();
                                system("cls");
                                printf("\nProbali ste se sakriti, ali niste bili dovoljno brzi. Neki cudan covjek vas je vidio i krenuo prema vama.\n\n\n\n");
                                printf("(pritisnite enter da nastavite)");

                                system("cls");
                                printf("(pritisnite enter da nastavite)");

                                getchar();
                                printf("\n-Ko si ti?-\n");

                                getchar();
                                printf("Ja sam %s.\n", ime_karaktera);

                                getchar();
                                printf("-Daj mi 50 KM ako hoces da izadjes odavde.-\n");

                                getchar();
                                printf("Nemam toliko, imam samo %d.\n", novac);

                                getchar();
                                printf("-Tvoj problem.-\n\n\n\n");

                                printf("-----Kraj-----");

                                exit(0);

                                break;
                           }


    case 2://switch 2 GL
    getchar();
            system("cls");
            printf("\nKrenuli ste kroz hodnik.\n\n\n\n");
            printf("(pritisnite enter da nastavite)");
            getchar();

            system("cls");
            printf("\nNa kraju ste hodnika, cujete da neko hoda u sobi ispred vas.\n\n\n\n");
            printf("(pritisnite enter da nastavite)");

            getchar();
            system("cls");
            printf("\nProbali ste se sakriti, ali niste bili dovoljno brzi. Neki cudan covjek vas je vidio i krenuo prema vama.\n\n\n\n");
            printf("(pritisnite enter da nastavite)");

            system("cls");
            printf("(pritisnite enter da nastavite)");

            getchar();
            printf("\n-Ko si ti?-\n");

            getchar();
            printf("Ja sam %s.\n", ime_karaktera);

            getchar();
            printf("-Daj mi 50 KM ako hoces da izadjes odavde.-\n");

            getchar();
            printf("Nemam toliko, imam samo %d.\n", novac);

            getchar();
            printf("-Tvoj problem.-\n\n\n\n");

            printf("-----Kraj-----");

            getchar();

            exit(0);

            break;
    }

    return 0;
}


