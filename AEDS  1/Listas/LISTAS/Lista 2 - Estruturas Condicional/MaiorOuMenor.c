// Ler um número real. Determinar e escrever se ele é maior, menor ou igual a zero.

float LerNumero ()
{
    float num;
    printf("\nDIGITE UM NUMERO:\n");
    scanf("%f",&num);
    
    return num;
}


int main()
{
    float numero = LerNumero();

    if (numero > 0)
    {
        printf("\n EH MAIOR\n");
    }

    if (numero < 0)
    {
        printf("\n EH MENOR\n");
    }

    else 
    {
        printf("\n EH ZERO PO\n");
    }
}