# include < stdio .h >
int main ( ) {
int N_ant , N_prox , N , N_atual
N_ant = N_atual =1;
for( i =1 ,i <= N , i ++) {
N_prox = N_ant + N_atual ;
N_ant = N_atual ;
N_atual = N_prox ;
printf ("Fim do laco !\n") ;
return
}

// A linha onde está as variaveis não contem ponto e virgula.
// A variavel "N" não foi declarado um valor a ela.
// A letra "i" não foi declarado no loop das variaveis.
// o return não foi atribuido um valor e não contem ponto e  virgula, e não poderia estar dentro do laço de repetição for pois seria execultado antes dos loops anteriores.

// Feito pelos Alunos Abnoan Gbariel e Fabricio Pereira.