
 #include<stdio.h> 
  
 int main(){ 
   int vet [5], cont, i; 
    
   for(i= 0; i < 5; i++){    /* inicialização do vetor */ 
     printf("\n\nDigite  qualquer numero:"); 
     scanf("%d",&vet[i]); 
   } 
   cont = 0; 
   for(i= 0; i < 5; i++){ 
      if (vet[i] > 100) 
      cont = cont + 1; 
   } 
    
   printf("\n\nExistem %d valores acima de 100", cont); 

  }