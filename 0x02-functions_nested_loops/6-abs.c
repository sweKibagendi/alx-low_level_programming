/**
 * _abs - Entry point
 *
 * @n: integer
 * Return: absolute function of an integer
 *
 * START
 * Declare auto num
 * IF parameter is less 0
 * THEN
 *	multiply parameter by -1 and store in num
 *	return num
 * ELSE
 *	return para
 */
int _abs(int n)
{
auto int num;

if (n < 0)
{
	num = n * -1;
	return (num);
}
else
	return (n);
}
