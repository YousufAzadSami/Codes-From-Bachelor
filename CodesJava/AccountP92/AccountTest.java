import java.util.*;

public class AccountTest
{
	public static void main(String[] args)
	{
		Account account1 = new Account(50.00);
		Account account2 = new Account(-50.25);


		System.out.printf("account1 balance: $%.2f\n",account1.getBalance());
		System.out.printf("account2 balance: $%.2f\n",account2.getBalance());


		Scanner input = new Scanner(System.in);
		double depositAmount,debitAmount;

		System.out.printf("Enter deposit amount for account1:\n");
		depositAmount=input.nextDouble();
		System.out.printf("Adding %.2f ammount to account1\n",depositAmount);
		account1.credit(depositAmount);


		System.out.printf("account1 balance: $%.2f\n",account1.getBalance());
		System.out.printf("account2 balance: $%.2f\n",account2.getBalance());



		System.out.printf("Enter deposit amount for account2:\n");
		depositAmount=input.nextDouble();
		System.out.printf("Adding %.2f ammount to account2\n",depositAmount);
		account2.credit(depositAmount);


		System.out.printf("account1 balance: $%.2f\n",account1.getBalance());
		System.out.printf("account2 balance: $%.2f\n",account2.getBalance());


		System.out.printf("Enter debit ammount for account1:\n");
		debitAmount = input.nextDouble();
		System.out.printf("substracting %.2f ammount form account1\n");
		account1.debit(debitAmount);


		System.out.printf("account1 balance: $%.2f\n",account1.getBalance());
		System.out.printf("account2 balance: $%.2f\n",account2.getBalance());


		System.out.printf("Enter debit ammount for account2:\n");
		debitAmount = input.nextDouble();
		System.out.printf("substracting %.2f ammount form account2\n");
		account2.debit(debitAmount);


		System.out.printf("account1 balance: $%.2f\n",account1.getBalance());
		System.out.printf("account2 balance: $%.2f\n",account2.getBalance());





	}
}