#include <stdio.h>        // ���������� ������������ ���� stdio.h
#include <string.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main()
{
	char s[50], str[50]; //�������� ��� ������� �����. ���� - ���  ������, ������ - ��� ������ ������ ��������� �����
	int min = 100; 
	printf("Enter a string:");
	gets(s); //���� ������
	for (char* p = strtok(s, " "); p; p = strtok(NULL, " ")) //������ s ����� ������� �� �������.���� ���� �������, ���� ����� �����������. ������ ������� ����� ������������ � �������� p
	{

		if (strlen(p) < min) //���� ����� �������� ����� ������ min, �� ��������� �������������� min, � � ������ str ���������� �����.
		{                    //���������� min ����� ������ ����� ��������, ����� ������� �������������� ����������� � ���� �������� ����� ������� �����.
			min = strlen(p);
			strcpy(str, p); //������ ����� � ������ str
		}
	}
	printf("The shortest word in the entered string is:");
	printf(str); //����� ��������� �����
	getch();  //�� ��������� ������� �����, ������ ����� ������� �������
	return 0;
}