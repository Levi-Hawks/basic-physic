#include <stdio.h>

void calcular_velocidade (int distancia, int tempo)
{
  int velocidade = distancia * 3.6 / (tempo * 60);
  printf("Velocidade = %ikm/h\n", velocidade);
}

void calcular_distancia (int velocidade, int tempo)
{
  int distancia = velocidade * 1000 *  tempo / 60;
  printf("Distância = %im\n", distancia);
}

void calcular_tempo (int velocidade, int distancia)
{
  int tempo = distancia / velocidade;
  printf("Tempo = %imin\n", tempo * 60 / 1000);
}

void main ()
{
  int velocidade, distancia, tempo, escolha;
  printf("Qual valor você quer calcular?\n");
  printf("[1] Velocidade \n[2] Distância \n[3] Tempo\n");
  printf("Sua escolha: ");
  scanf("%i", &escolha);

  if (escolha == 1) {
    printf("Me dê o valor da distância, em metros: ");
    scanf("%i", &distancia);
    printf("Agora me dê o valor do tempo, em minutos: ");
    scanf("%i", &tempo);
    calcular_velocidade(distancia, tempo);
  }

  if (escolha == 2) {
    printf("Me dê o valor da velocidade, em km/h: ");
    scanf("%i", &velocidade);
    printf("Agora me dê o valor do tempo, em minutos: ");
    scanf("%i", &tempo);
    calcular_distancia(velocidade, tempo);
  }

  if (escolha == 3) {
    printf("Me dê o valor da velocidade, em km/h: ");
    scanf("%i", &velocidade);
    printf("Agora me dê o valor da distância, em metros: ");
    scanf("%i", &distancia);
    calcular_tempo(velocidade, distancia);
  }

}
