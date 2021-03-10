
#include"Contact.h"

void menu()
{
	printf("********************************\n");
	printf("***** 1.add     2.del    *******\n");
	printf("***** 3.search  4.modify *******\n");
	printf("***** 5.show    6.sort   *******\n");
	printf("******    0.exit         *******\n");
	printf("********************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

int main()
{
	struct Contact con;
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcontact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			//Sort_byname(&con);
			break;
		case EXIT:
			printf("���˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}