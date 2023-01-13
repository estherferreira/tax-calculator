/* Calcular imposto sobre um produto — *Cálculo de produtos individuais, não da nota completa*

- Quantidade
- Valor Total
- ICMS
- IPI
- Produto com imposto calculado

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL,"portuguese");
    int qtd;
    float vt, icms, ipi, v_sem_imp, pcic;

    printf("\n\tDigite a quantidade do produto: ");
    scanf("%i", &qtd);
    printf("\n\tDigite o valor total: ");
    scanf("%f", &vt);
    //Apenas vírgula
    printf("\n\tDigite o valor do ICMS: ");
    scanf("%f", &icms);
    printf("\n\tDigite o valor do IPI: ");
    scanf("%f", &ipi);

    v_sem_imp=vt/qtd;
    pcic=(vt+icms+ipi)/qtd;

    printf("\n\tVocê pagou por esse produto: R$%.2f ",pcic);
    printf("\n\tValor sem o imposto: R$%.2f ", v_sem_imp);
    printf ("\n\n\t");
    system ("pause");
    return 0;
}
