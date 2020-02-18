#include <stdio.h> 
typedef enum syllable{Do, Re, Mi, Fa, So, Ra, Ti}Syllable;

void sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("���� �Ͼ� ������ ��");
		return 0;
	case Re:
		puts("���� �ձٷ��ڵ� ��");
		return 0;
	case Mi:
		puts("�̴� �Ķ� �̳��� �ۢ�");
		return 0;
	case Fa:
		puts("�Ĵ¿��� �Ķ��� �ڢۢ�");
		return 0;
	case So:
		puts("���� ���� �ֹ�� �ڢۢ�");
		return 0;
	case Ra:
		puts("��� �������~~ �ڢۢܢ�");
		return 0;
	case Ti:
		puts("�ô� ���� �ó��� �ۢ�");
		return 0;
	}
	puts("�� �Բ� �θ��ڢ� �������ļֶ�õ��ֵּ֢���  ");
}

int main(void)
{
	Syllable tone;
	for (tone = 0; tone < 7; tone += 1)
	{
		sound(tone);
	}
	
	return 0;
}