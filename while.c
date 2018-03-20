#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h> //habilita a acentua��o para o portugu�s


int main() {

setlocale(LC_ALL,"");//habilita a acentua��o para o portugu�s

	//imprime na tela o titulo do nosso jogo
printf("bem vindo\n");

printf("                                                               .---.         \n");
printf("                                                              /  .  \\       \n");
printf("                                                             |\\_/|   |      \n");
printf("                                                             |   |  /|       \n");
printf("  .----------------------------------------------------------------' |       \n");
printf(" /  .-.                                                              |       \n");
printf("|  /   \\                   BEM VINDO AO JOGO                         |      \n");
printf("| |\\_.  |                                                            |      \n");
printf("|\\|  | /|                         DE                                 |      \n");
printf("| `---' |                                                            |       \n");
printf("|       |                     ADIVINHA��O                            |       \n");
printf("|       |                                                           /        \n");
printf("|       |----------------------------------------------------------'         \n");
printf("\\       |                                                                   \n");
printf("\\      /                                                                    \n");
printf("  `---'                                                                      \n");

system("pause");

    //gerando random constantes na fun��o rand
    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand(); //numero randomico ser� muito grande
    int numerosecreto = numerogrande % 100; //declarando uma variavel do tipo inteiro. mod para limitar o numero rand at� 99.
    int chute; //variavel sem numero constante
    int tentativas = 1; //para gerar uma contagem de tentativas
    double pontos = 1000; //para criar pontua��o


    int nivel;
    printf("\n\n");
    printf("                   .'\\   /`.                                \n");
    printf("                 .'.-.`-'.-.`.                               \n");
    printf("            ..._:   .-. .-.   :_...                          \n");
    printf("          .'    '-.(o ) (o ).-'    `.                        \n");
    printf("         :  _    _ _`~(_)~`_ _    _  :                       \n");
    printf("        :  /:   ' .-=_   _=-. `   ;\\  :    Qual o n�vel     \n");
    printf("        :   :|-.._  '     `  _..-|:   :    de dificuldade?   \n");
    printf("         :   `:| |`:-:-.-:-:'| |:'   :                       \n");
    printf("          `.   `.| | | | | | |.'   .'                        \n");
    printf("            `.   `-:_| | |_:-'   .'                          \n");
    printf("              `-._   ````    _.-'                            \n");
    printf("                  ``-------''                            \n\n\n");

    printf("(1) F�cil  (2) M�dio  (3) Dif�cil\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch(nivel){
        case 1:
        numerodetentativas = 20;
        printf("      _      _      _                                               \n");
        printf("   __(.)< __(.)> __(.)=     MODO FRANGO!! A� � MUITO F�CIL!!!kkk    \n");
        printf("   \\___)  \\___)  \\___)                                           \n");
        break;

        case 2:
        numerodetentativas = 15;
        printf("     _    _                                             \n");
        printf("    (o)--(o)                                            \n");
        printf("   /.______.\\                                          \n");
        printf("   \\________/       MELHOR COME�AR POR ESSE, N�!!!     \n");
        printf("  ./        \\.                                         \n");
        printf(" ( .        , )                                         \n");
        printf("  \\ \\_\\\\//_/ /                                       \n");
        printf("   ~~  ~~  ~~                                           \n");
        break;

        default:
        numerodetentativas = 6;
        printf("                          ____                                  \n");
        printf(" ________________________/ O  \\___/     ESSE � COBRA !!!!!     \n");
        printf("<_____________________________/   \\                            \n");
        break;
    }


  //criar um loop de repeti��o usando While quando  n�o sei o numero de repeats, portanto com contador ou variavel de incremento
  		for(int i=1; i <= numerodetentativas; i++){ //1 para expressar verdadeiro e o loop sempre repetir, at� eu inserir um break ou um fim.

		  printf("\n\nTentativa %d de %d.\n\n", tentativas, numerodetentativas); //imprimindo uma varivel usa-se % seguido do tipo, no caso "d" para inteiro.
		  printf("Qual � o seu chute? ");
		  scanf("%d", &chute); //para receber um valor e atribuir a variavel chute
		  printf("Seu chute foi %d\n",chute);

            int maior = chute>numerosecreto;
            int menor = chute<numerosecreto;

		  if (chute<0){ //validando o numero do usuario
            printf("N�mero secreto n�o pode ter negativo!!");

		  	continue; i--; //tipo o break por�m n�o mata a execu��o do loop, pede apenas para voltar a partir do i++
            }
                else if (chute==numerosecreto)
                    {
                    printf("                                          MMMM                                                      \n");
                    printf("                                       MMMMMMMMMM                                                   \n");
                    printf("                                     MMMMMMMMMMMMMM                                                 \n");
                    printf("         MMMM                        MMMMMMMMMMMMMMM                                                \n");
                    printf("      MMMMMMMMMM                    MMMMMMMMMMMMMMMM                                                \n");
                    printf("     MMMMMMMMMMMM                  MMMMMMMMMMMMMMMMMM                                               \n");
                    printf("   MMMMMMMMMMMMMMM                 MMMMMMMMMMMMMMMMMM                                               \n");
                    printf("  MMMMMMMMMMMMMMMMM                MMMMMMMMMMMMMMMMMM                                               \n");
                    printf("  MMMMMMMMMMMMMMMMM                MMMMMMMMMMMMMMMMMM                                               \n");
                    printf(" MMMMMMMMMMMMMMMMMMM               MMMMMMMMMMMMMMMMMM                                               \n");
                    printf(" MMMMMMMMMMMMMMMMMMM               MMMMMMMMMMMMMMMMMM                                               \n");
                    printf(" MMMMMMMMMMMMMMMMMMM                MMMMMMMMMMMMMMMMM                                               \n");
                    printf(" MMMMMMMMMMMMMMMMMMM     MMMMMMM    MMMMMMMMMMMMMMMMM                                               \n");
                    printf(" MMMMMMMMMMMMMMMMMMM   MMMMMMMMMMMMM MMMMMMMMMMMMMMM                                                \n");
                    printf(" MMMMMMMMMMMMMMMMMMM  MMMMMMMMM----MMMMMMMMMMMMMMMM                                                 \n");
                    printf(" MMMMMMMMMMMMMMMMMM MMMMMMMMMM------MMMMMMMMMMMMMM                                                  \n");
                    printf(" MMMMMMMMMMMMMMMMMMMMM----MMM---/=\\--MMMMMMMMMMMM                                                  \n");
                    printf("  MMMMMMMMMMMMMMMMMMM--==--MM------\\--MMM MMMMMM                                                   \n");
                    printf("  MMMMMMMMMMMMMMMMMM--/-----M-------\\--MMM                                                         \n");
                    printf("   MMMMMMMMMMMMMMMM--/-----------------MMM                                                          \n");
                    printf("     MMMMMMMMM  MMM--|------------------MMM                                                         \n");
                    printf("       MMMMM   MMM------/..\\---/..\\-----MMM                                                       \n");
                    printf("               MMM-----/....\\-/....\\----MMMM                                                      \n");
                    printf("              MMMM-----......-......----MMMM                    PARAB�NSSS!!! VOC� ACERTOU!         \n");
                    printf("              MMMM-----......-......----MMMM                                                        \n");
                    printf("              MMMM-----......-.MM...---MMMMM                 Jogue novamente, voc� � um bom jogador!\n");
                    printf("              MMMMM----...MM.-.MMM..---MMMMM                                                        \n");
                    printf("              MMMMM----..MMM.-\\MMM./---MMMMM                                                       \n");
                    printf("              MMMMMM---\\.MMM.--\\M./---/-----                                                      \n");
                    printf("              MMMMMM----\\M/=======\\---------             Voc� acertou em %d tentativas!\n",tentativas);
                    printf("              MM----M--/====-MMMMM------------             Sua pontua��o foi: %.1f\n ", pontos); //esse .1 representa quantas casas decimais ir� apresentar na mascara
                    printf("                -----------MMMMMMMM-----------                                                      \n");
                    printf("               ------------MMMMMMMM-----------                                                      \n");
                    printf("               ------------MMMMMMMM----X------                                                      \n");
                    printf("               ------_/----MMMMMMM-----/-\\----                                                     \n");
                    printf("               -----/\\------MMMMM------|-----                                                      \n");
                    printf("               ----/--\\---------------/-----                                                       \n");
                    printf("                -------\\-------------M-----                                                        \n");
                    printf("                --------=-----------MM----                                                          \n");
                    printf("                  -------\\=========MMM---                                                          \n");
                    printf("                   ------MMMMMMMMMMMM---                                                            \n");
                    printf("                     -----MXXXXXXXXM---                                                             \n");
                    printf("                    MMMMM--XXXXXXXX--                                                               \n");
                    printf("                 MMMMMMMMM---XXXX---M                                                               \n");
                    printf("            MMMMMMMMMMMMMMM--------MMM                                                              \n");
                    printf("           MMMMMM:++MMMMMMMMM----MMMMM                                                              \n");
                    printf("          MMMMMM:MMMMMMMMMMMMMMMMMMMMMM                                                             \n");
                    printf("          MMMMM:M////MMMMMMMMMMMMMMMMMM                                                             \n");
                    printf("          MMMMM//////////MMMMMMMMMMMMMMM                                                            \n");
                    printf("          MMMM/////////////MMMMMMMMMMMMM                                                            \n");
                    printf("          MMM///////////////MMMMMMMMMMMM                                                            \n");
                    printf("           M///...////////////MMMMMMMMMMM                                                           \n");
                    printf("           ///....////..///////MMMMMMMMMM                                                           \n");
                    printf("           ///....///....///////MM  MMMMMM                                                          \n");
                    printf("           ///....///....////////M  MMMMMM                                                          \n");
                    printf("          ////...///.....///////// MMMMMMMM                                                         \n");
                    printf("          ////..////...../////////MMMMMMMMM                                                         \n");
                    printf("          //////////...../////////MMMMMMMMM                                                         \n");
                    printf("          //////////....//////////MMMMMMMM                                                          \n");
                    printf("          ///////////..///////////MMMMMMM                                                           \n");
                    printf("          ////////////////////////MMMMM                                                             \n");
                    printf("          ////////////////////////MMM                                                               \n");
                    printf("           ///////////////////////                                                                  \n");
                    printf("           ///////////////////////                                                                  \n");
                    printf("           ///////////////////////                                                                  \n");
                    printf("           ///////////////////////                                                                  \n");
                    printf("          ////////////////////////                                                                  \n");
                    printf("          ////////////////////////                                                                  \n");
                    printf("          //////X//////////////////                                                                 \n");
                    printf("           //////XXX///////////////                                                                 \n");
                    printf("             ///////V//////////////                                                                 \n");
                    printf("                /////X//////////:::                                                                 \n");
                    printf("                 MMMM/////MMMM::MM                                                                  \n");
                    printf("                  MMMMM|MMMMMMM   MMM                                                               \n");
                    printf("                  MMMMMM|MMMMMM      MMMM____                                                       \n");
                    printf("                   MMMMM|MMMMMM              \\------                                               \n");
                    printf("                    MMMM\\MMMMMM                     -_                                             \n");
                    printf("                     MMMM|MMMMMM                      \\                                            \n");
                    printf("                     MMMM\\MMMMMM                       \\                                          \n");
                    printf("                      MMMM\\MMMMM                        |                                          \n");
                    printf("                       MMM|MMMMMM                      /                                            \n");
                    printf("        VVVVVVV      VVMMMM\\\\MMMMM                     /                                          \n");
                    printf("     VVVVVVVVVXVVVV  VVVMMMM|MMMM                   _-                                              \n");
                    printf("     VVVVVVVVVVXVVVVVIVVVMMIIMMMMVV            -----                                                \n");
                    printf("    VVVVVVVVVVVVVXXVVVIVVVVIIMMMMMVV                                                                \n");
                    printf("    VVVVVVVVVVVVVVVXXVVVVVVVIIVMMMVVVVVVV                                                           \n");
                    printf("    VVVVVVVVVVVVVVVVXVXVVVVVIIVVVVVVVVVVVVVVVV                                                      \n");
                    printf("    VVVVVVVVVVVVVVVVVXVXVVVVIVIVVVVVVVVVVVVXVVVVVV                                                  \n");
                    printf("    VVVVVVVVVVVVVVVVVVXVXVVIVVVIVVVVVVVVVXVVXVVVVVVV                                                \n");
                    printf("     VVVVVVVVVVVVVVVVVVXVXVIVVVVVVVVVVVVXVVXVVVVVVVVV                                               \n");
                    printf("     VVVVVVVVVVVVVVVVVVVXVVIVVVVVVVVVVVXVXVVVVVVVVVVVV                                              \n");
                    printf("      VVVVVVVVVVVVVVVVVVVVVVIVVVVVVVVVXVXVVVVVVVVVVVVV                                              \n");
                    printf("       VVVVVVVVVVVVVVVVVVVVVIVVVVVVVVXVXVVVVVVVVVVVVVV                                              \n");
                    printf("         VVVVVVVVVVVVVVVVVV  VVVVVVVXXVVVVVVVVVVVVVVVV                                              \n");
                    printf("           VVVVVVVVVVVVVV     VVVXXXVVVVVVVVVVVVVVVVVV                                              \n");
                    printf("              VVVVVVVVV        VXVVVVVVVVVVVVVVVVVVVV                                               \n");
                    printf("                                 VVVVVVVVVVVVVVVVVVV                                                \n");
                    printf("                                  VVVVVVVVVVVVVVVVV                                                 \n");
                    printf("                                   VVVVVVVVVVVVVV                                                   \n");
                    printf("                                     VVVVVVVVV                                                      \n");
                    break;
                    }


		  	else if(maior) { //if encadeado
                printf("     .                                      \n");
                printf("   .:;:.                                    \n");
                printf(" .:;;;;;:.              Seu chute foi       \n");
                printf("   ;;;;;                 maior do que       \n");
                printf("   ;;;;;               o n�mero secreto!    \n");
                printf("   ;;;;;                                    \n");
                printf("   ;;;;;                                    \n");
                printf("   ;:;;;                                    \n");
                printf("   : ;;;                                \n\n\n");
			  		}

			else { //n�o precisa usar o if com a condi��o menor porque foi a unica op��o que sobrou.
                printf("   . ;.                                     \n");
                printf("    .;                                      \n");
                printf("     ;;.                                    \n");
                printf("   ;.;;                                     \n");
                printf("   ;;;;.             Seu chute foi          \n");
                printf("   ;;;;;              menor que o           \n");
                printf("   ;;;;;            n�mero secreto!         \n");
                printf("   ;;;;;                                    \n");
                printf("   ;;;;;                                    \n");
                printf("   ;;;;;                                    \n");
                printf(" ..;;;;;..                                  \n");
                printf("  ':::::'                                   \n");
                printf("    ':`                                 \n\n\n");
			  		}


			tentativas++;
			double pontosperdidos = abs((chute-numerosecreto)/2.0); //abs converte um numero para positivo
			pontos = pontos-pontosperdidos;

            if (tentativas>numerodetentativas)
            {
            printf("Fim de jogo!\n");
            printf("                           /\\                \n");
            printf("                   __     /^|                 \n");
            printf("                  / /\\###//||                \n");
            printf(" Voc� perdeu!     |//  #  \\//                \n");
            printf("                   :(o) (o);                  \n");
            printf(" Tente de novo!     \\     /##                \n");
            printf("                     || ||  ##                \n");
            printf("                     /   \\   `--...____      \n");
            printf("                    ( @_@ )                   \n");
            printf("                     `---'    /               \n");
            printf("                      |      |                \n");
            printf("                       \\      \\   |         \n");
            }
    }
}
