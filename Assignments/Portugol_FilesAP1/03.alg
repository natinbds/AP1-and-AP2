Algoritmo "Questao_03" 
  
Var 
   n,i :inteiro 

Inicio 
   escreval("Digite o Até qual valor quer a contagem, progressiva:") 
   leia(n) 
   i<- n 
   repita 
      enquanto n <= 0 faca 
         escreval ("Numero invalido, digite um valor positivo: ") 
         leia (n) 
         i <- n 
      fimenquanto 
  
      escreval(i) 
      i<- i-1 
  
   ate(i<=0) 
  
Fimalgoritmo
