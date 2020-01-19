public class Account
{
	private double balance;

	public Account(double initialBalance)
	{
		if(initialBalance>0.0)
			balance = initialBalance;
	}


	public void credit(double amountC)
	{
		balance = balance + amountC;
	}

	public void debit(double amountD)
	{
			if(amountD>balance)
				System.out.printf("Your debit amount is %f, which is more than your current balance\n",amountD);

			else
				balance = balance - amountD;
	}


	public double getBalance()
	{
		return balance;
	}
}