
#include <stdio.h>

int main()
{
    int qalunos;
    float nota, nt = 0.0, media;
    
    do{
        printf("Digite a quantidade de alunos: "); 
        scanf("%d", &qalunos);
        
        if(qalunos<=0){
          printf("Quantidade inválida de alunos\n");
          
        }
            
    } while(qalunos<=0);
    
    for(int i =1; i<qalunos;i++){
        
        do{
            printf("Digite a nota do aluno %d: ", i);
            scanf("%f", &nota);
            
            if(nota <0 || nota >10){
                printf("Nota inválida, digite novamente!");
                
            }
            
        }while (nota<0 || nota>10);
        
        nt += nota;
    }
    
    media = nt / qalunos;
    
    printf("A média da turma é: %.2f\n", media);
       
    return 0;
}
