int rand()
{
	static int p = -1;
	int num[] = {8, 8, 7, 9, 23, 74};

	p++;
	return(num[p]);
}
