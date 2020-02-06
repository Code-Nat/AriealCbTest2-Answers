void printReverseNodeSecond(Node* head)
{
	if (head)
	{
		if (head->next)
			printReverseNodeSecond(head->next->next);
		printf("%d ", head->data);
	}
}

void printHalf(Node* head)
{
	int i = 1;
	Node* current = head;

	while (current=current->next) i++;

	if (i % 2)
		printReverseNodeSecond(head);           //for odd numbers
	else
		printReverseNodeSecond(head->next);     //for even numbers
}
