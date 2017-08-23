int determine_termination(node *head)
{
	node *slow, *fast;

	slow=fast=head;

	while(1)
	{
		if(!fast || !fast->next) retrun 0;
		if(fast == slow || fast->next == slow)
			return 1;
		else
		{
			slow = slow->next;
			fast = fast->next->next;
		}
	}	
}