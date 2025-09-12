#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* é basicamente um formato de exibicao de lembrete de compromissos, a data e horario sao preenchidos manualmente no codigo, sinta-se a vontade pra testar*/

struct horario {
    int hora;
    int minutos;
    int segundos;
};
 
struct data {
    int dia;
    int mes;
    int ano;
};
 
struct agenda{
    struct horario horario2;
    struct data data2;
    char compromisso[50];
};
 
int main (){
  //troque as datas e horarios do compromisso por aqui, apenas substitua os valores =)
    struct horario horario1 = {16, 20, 59};
    struct data data1 = {4, 7, 2024}; // nao é uma referencia a independencia norte-americana, é só a data de lançamento dum jogo favorito meu
    struct agenda agenda1;

  // também é possivel trocar o nome do compromisso entre as aspas duplas abaixo
  strcpy(agenda1.compromisso, "reuniao");
 
   agenda1.horario2 = horario1;
    agenda1.data2 = data1;
 
printf("Agenda: \n");
printf("Horario: %d:%d:%d \n", agenda1.horario2.hora, agenda1.horario2.minutos, agenda1.horario2.segundos);
printf("Data: %d/%d/%d \n", agenda1.data2.dia, agenda1.data2.mes, agenda1.data2.ano);
printf("Compromisso: %s\n", agenda1.compromisso);
}
