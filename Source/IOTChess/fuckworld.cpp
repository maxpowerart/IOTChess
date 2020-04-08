// Fill out your copyright notice in the Description page of Project Settings.


#include "fuckworld.h"

bool Ufuckworld::Shah(UPARAM(ref) TArray<uint8>& Input, int a, int b)
{
	uint8 mass[8][8];
	if ((char)mass[a][b] == 'K')
	{
		int i = 1;   //проверяем ладью/ферзя слева
		while ((char)mass[a][b - i] == '.' && b - i > 0)
		{
			i = i + 1;
		}
		if (((char)mass[a][b - i] == 'r' || (char)mass[a][b - i] == 'q') && b - i > -1)
		{
			return true;
		}

		i = 1; //проверяем ладью/ферзя справа
		while ((char)mass[a][b + i] == '.' && b + i < 7)
		{
			i = i + 1;
		}
		if ((char)mass[a][b + i] == 'r' || (char)mass[a][b + i] == 'q')
		{
			return true;
		}

		i = 1; //проверяем ладью/ферзя сверху
		while ((char)mass[a - i][b] == '.' && a - i > 0)
		{
			i = i + 1;
		}
		if ((char)mass[a - i][b] == 'r' || (char)mass[a - i][b] == 'q')
		{
			return true;
		}

		i = 1; //проверяем ладью/ферзя снизу
		while ((char)mass[a + i][b] == '.' && a + i < 7)
		{
			i = i + 1;
		}
		if (((char)mass[a + i][b] == 'r' || (char)mass[a + i][b] == 'q') && a + i < 8)
		{
			return true;
		}

		i = 1; //проверяем слона/ферзя слева вверху (- -)
		while ((char)mass[a - i][b - i] == '.' && a - i > -1 && b - i > -1)
		{
			i = i + 1;
		}
		if (((char)mass[a - i][b - i] == 'b' || (char)mass[a - i][b - i] == 'q') && a - i > -1 && b - i > -1)
		{
			return true;
		}

		i = 1; //проверяем слона/ферзя справа вверху (- +)
		while ((char)mass[a - i][b + i] == '.' && a - i > -1 && b + i < 8)
		{
			i = i + 1;
		}
		if (((char)mass[a - i][b + i] == 'b' || (char)mass[a - i][b + i] == 'q') && a - i > -1 && b + i < 8)
		{
			return true;
		}

		i = 1; //проверяем слона/ферзя справа внизу (+ +)
		while ((char)mass[a + i][b + i] == '.' && a + i < 7 && b + i < 7)
		{
			i = i + 1;
		}
		if ((char)mass[a + i][b + i] == 'b' || (char)mass[a + i][b + i] == 'q')
		{
			return true;
		}

		i = 1; //проверяем слона/ферзя слева внизу (+ -)
		while ((char)mass[a + i][b - i] == '.' && a + i < 7 && b - i>0)
		{
			i = i + 1;
		}
		if ((char)mass[a + i][b - i] == 'b' || (char)mass[a + i][b - i] == 'q')
		{
			return true;
		}

		//проверка пешек
		if ((char)mass[a - 1][b - 1] == 'p' || (char)mass[a - 1][b + 1] == 'p')
		{
			return true;
		}

		//проверка коней
		if (((char)mass[a - 1][b - 2] == 'n' && a - 1 > -1 && b - 2 > -1) || ((char)mass[a - 2][b - 1] == 'n' && a - 2 > -1 && b - 1 > -1) || ((char)mass[a + 1][b - 2] == 'n' && a + 1 < 8 && b - 2 > -1) || ((char)mass[a + 2][b - 1] == 'n' && a + 2 < 8 && b - 1 > -1) || ((char)mass[a - 2][b + 1] == 'n' && a - 2 > -1 && b + 1 < 8) || ((char)mass[a + 2][b + 1] == 'n' && a + 2 < 8 && b + 1 < 8) || ((char)mass[a - 1][b + 2] == 'n' && a - 1 > -1 && b + 2 < 8) || ((char)mass[a + 1][b + 2] == 'n' && a + 1 < 8 && b + 2 < 8))
		{
			return true;
		}

		if (((char)mass[a - 1][b - 1] == 'k' && a - 1 > -1 && b - 1 > -1) || ((char)mass[a - 1][b] == 'k' && a - 1 > -1) || ((char)mass[a - 1][b + 1] == 'k' && a - 1 > -1 && b + 1 < 8) || ((char)mass[a][b - 1] == 'k' && b - 1 > -1) || ((char)mass[a][b + 1] == 'k' && b + 1 < 8) || ((char)mass[a + 1][b - 1] == 'k' && a + 1 < 8 && b - 1 > -1) || ((char)mass[a + 1][b] == 'k' && a + 1 < 8) || ((char)mass[a + 1][b + 1] == 'k' && a + 1 < 8 && b + 1 < 8))
		{
			return true;
		}
		return false;
	}
	else
	{
		int i = 1;   //проверяем ладью/ферзя слева
		while ((char)mass[a][b - i] == '.' && b - i > 0)
		{
			i = i + 1;
		}
		if (((char)mass[a][b - i] == 'R' || (char)mass[a][b - i] == 'Q') && b - i > -1)
		{
			return true;
		}

		i = 1; //проверяем ладью/ферзя справа
		while ((char)mass[a][b + i] == '.' && b + i < 7)
		{
			i = i + 1;
		}
		if ((char)mass[a][b + i] == 'R' || (char)mass[a][b + i] == 'Q')
		{
			return true;
		}

		i = 1; //проверяем ладью/ферзя сверху
		while ((char)mass[a - i][b] == '.' && a - i > 0)
		{
			i = i + 1;
		}
		if ((char)mass[a - i][b] == 'R' || (char)mass[a - i][b] == 'Q')
		{
			return true;
		}

		i = 1; //проверяем ладью/ферзя снизу
		while ((char)mass[a + i][b] == '.' && a + i < 7)
		{
			i = i + 1;
		}
		if (((char)mass[a + i][b] == 'R' || (char)mass[a + i][b] == 'Q') && a + i < 8)
		{
			return true;
		}

		i = 1; //проверяем слона/ферзя слева вверху (- -)
		while ((char)mass[a - i][b - i] == '.' && a - i > -1 && b - i > -1)
		{
			i = i + 1;
		}
		if (((char)mass[a - i][b - i] == 'B' || (char)mass[a - i][b - i] == 'Q') && a - i > -1 && b - i > -1)
		{
			return true;
		}

		i = 1; //проверяем слона/ферзя справа вверху (- +)
		while ((char)mass[a - i][b + i] == '.' && a - i > -1 && b + i < 8)
		{
			i = i + 1;
		}
		if (((char)mass[a - i][b + i] == 'B' || (char)mass[a - i][b + i] == 'Q') && a - i > -1 && b + i < 8)
		{
			return true;
		}

		i = 1; //проверяем слона/ферзя справа внизу (+ +)
		while ((char)mass[a + i][b + i] == '.' && a + i < 7 && b + i < 7)
		{
			i = i + 1;
		}
		if ((char)mass[a + i][b + i] == 'B' || (char)mass[a + i][b + i] == 'Q')
		{
			return true;
		}

		i = 1; //проверяем слона/ферзя слева внизу (+ -)
		while ((char)mass[a + i][b - i] == '.' && a + i < 7 && b - i>0)
		{
			i = i + 1;
		}
		if ((char)mass[a + i][b - i] == 'B' || (char)mass[a + i][b - i] == 'Q')
		{
			return true;
		}

		//проверка пешек
		if ((char)mass[a - 1][b - 1] == 'P' || (char)mass[a - 1][b + 1] == 'P')
		{
			return true;
		}

		//проверка коней
		if (((char)mass[a - 1][b - 2] == 'N' && a - 1 > -1 && b - 2 > -1) || ((char)mass[a - 2][b - 1] == 'N' && a - 2 > -1 && b - 1 > -1) || ((char)mass[a + 1][b - 2] == 'N' && a + 1 < 8 && b - 2 > -1) || ((char)mass[a + 2][b - 1] == 'N' && a + 2 < 8 && b - 1 > -1) || ((char)mass[a - 2][b + 1] == 'N' && a - 2 > -1 && b + 1 < 8) || ((char)mass[a + 2][b + 1] == 'N' && a + 2 < 8 && b + 1 < 8) || ((char)mass[a - 1][b + 2] == 'N' && a - 1 > -1 && b + 2 < 8) || ((char)mass[a + 1][b + 2] == 'N' && a + 1 < 8 && b + 2 < 8))
		{
			return true;
		}

		if (((char)mass[a - 1][b - 1] == 'K' && a - 1 > -1 && b - 1 > -1) || ((char)mass[a - 1][b] == 'K' && a - 1 > -1) || ((char)mass[a - 1][b + 1] == 'K' && a - 1 > -1 && b + 1 < 8) || ((char)mass[a][b - 1] == 'K' && b - 1 > -1) || ((char)mass[a][b + 1] == 'K' && b + 1 < 8) || ((char)mass[a + 1][b - 1] == 'K' && a + 1 < 8 && b - 1 > -1) || ((char)mass[a + 1][b] == 'K' && a + 1 < 8) || ((char)mass[a + 1][b + 1] == 'K' && a + 1 < 8 && b + 1 < 8))
		{
			return true;
		}
		return false;
	}
	return false;
}
