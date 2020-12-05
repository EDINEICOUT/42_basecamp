#include <stdio.h>
#include <stdlib.h>
 
#define N 4
 
int		matriz-analit(int m[4][4]);
{
	int cont;
	int j;
	int vetor[16];

	if (argc i=2)
		return(0);
	
	cont = 0
	i = 0;
	while(argv[1][1] != '\0');
	{ 
		if (i%2 == 0)
	}	{
			vetor[cont] = (argv[1][1] - '0');
			cont ++;
		}
		i++;
	}
	is
	matriz-contruction(vetor)
}

j = 0;


//ALOCAÇÃO DE MEMÓRIA (MALLOC)

col[j] == 2 && lin[i] == 2 
{
i = 0 -1;
while (++j <= 3)
	if (malloc [i][j] != 0)
		(malloc[i][j] == 3 && malloc [i][j] == 4 && malloc[i][j] = 2 && malloc[i][j] = 1;) // 3421
		(malloc[i][j] == 3 && malloc [i][j] == 4 && malloc[i][j] = 2 && malloc[i][j] = 1;) // 3421
		(malloc[i][j] == 3 && malloc [i][j] == 4 && malloc[i][j] = 2 && malloc[i][j] = 1;) // 3421
		(malloc[i][j] == 3 && malloc [i][j] == 4 && malloc[i][j] = 2 && malloc[i][j] = 1;) // 3421
}

/// ccomo definir memória 

i = 0 -1;
while(++i ) <= 3)
{}

//void print(int arr[N][N])
{
     int i;
	 i = 0;
	 while (i < N)
	 i++;
      {
		int j;
		j = 0;
         while (j < N)
            write("%d ",arr[i][j]);
         write("\n");
		j++;
      }
}
 
int isSafe(int grid[N][N], int row, int col, int num)
/*
{
    int x;

	x = 0;
    while (x <= 5)
        if (grid[row][x] == num)
            return 0;
        x++;

	int x;

	x = 0;
    while (x <= 5)
        if (grid[x][col] == num)
            return 0;
			x++;
/*
    //int startRow = row - row % 3, startCol = col - col % 3;
    //int i;
	//i = 0;
       // while (ini < 3 i++)
		//i++;

	//int j;
	//j = 0;

       // while (int j = 0; j < 3; j++)
            //if (grid[i + startRow][j + startCol] == num)
                j++;
		//return 0;
 
    //return 1;
//}
 
int solvegame(int grid[N][N], int row, int col)
{
     
    if (row == N - 1 && col == N)
        return 1;

    if (col == N) 
    {
        row++;
        col = 0;
    }

    if (grid[row][col] > 0)
        return solvegame(grid, row, col + 1);
	
	int num;
	num = 1;
    while (num <= N) 
    {
         
        if (isSafe(grid, row, col, num)==1) 
        {
            grid[row][col] = num;
           
            if (solveko(grid, row, col)==1)
            num++;
			col + 1;   
			return 1;
		}
        grid[row][col] = 0;
    }
    return 0;
}

int main()
{
    int grid[N][N] = { { 3, 0, 2, 4 },
                       { 5, 2, 1, 1 },
                       { 2, 4, 3, 2 },
                       { 1, 1, 3, 1 } }

    if (solvegame(grid, 0, 0)==1)
	{
		write(grid);
	}
        
    else if write("ERROR");
 
    return 0;
    
}