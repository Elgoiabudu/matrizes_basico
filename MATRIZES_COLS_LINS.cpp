#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i, j, escolha=1;
    float mat[5][10], soma=0;
    
    while(escolha==1)
    {
        for(i=0; i<=4; i++)
        {
            for(j=0; j<=9; j++) // IMPRIMINDO A MATRIZ!
            {
                mat[i][j]=rand() % 10; // AUTOMATIZANDO A ESCOLA DA SOMA DAS MATRIZES!
                cout<<" "<<mat[i][j];
            }
            cout<<"\n";
        }
    
        for(i=0; i<=4; i++) // SOMANDO AS LINHAS!
        {
            soma=0;
            for(j=0; j<=9; j++)
            {
                soma+=mat[i][j];
            }
            cout<<"\nSoma da Linha "<<i<<" = "<<soma<<".";
        }
    
        cout<<"\n";
    
        for(j=0; j<=9; j++) // SOMANDO AS COLUNAS!
        {
            soma=0;
            for(i=0; i<=4; i++)
            {
                soma+=mat[i][j];
            }
            cout<<"\nSoma da Coluna "<<j<<" = "<<soma<<".";
        }
        
        cout<<"\n\n\n";
        cout<<"\nAPERTE [1] PARA RECOMEÇAR. QUALQUER OUTRA TECLA ENCERRA O PROGRAMA! "; // RECOMEÇAR O PROGRAMA!
        cin>>escolha;
        
        if(escolha==1)
        {
            system("clear");
        }
    }
    
    system("break");
}