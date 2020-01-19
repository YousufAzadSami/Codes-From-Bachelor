import java.util.Scanner;
abstract class Worker{

		double money;
		int hour;

		Worker(double c,int d)
		{
		  	money=c;
		  	hour=d;
		}

		abstract double calculateSalary();
	}

   		class Daysalary extends Worker{

			double dayincome;

 			Daysalary(double a,int b)
 			{
 			      super(a,b);
 			}

 			double calculateSalary()
 			{
 				dayincome=money*hour;
 			    return dayincome;
 			}

    	}


		class Monthsalary extends Worker{

			double monthincome;

			Monthsalary(double d,int e)
			{
				super(d,e);
			}

			double calculateSalary()
			{
				monthincome=money*hour*30;
			  	return monthincome;
		    }

		}



	  	class GarmentWorker{

	  	public static void main(String args[]){

			      Scanner scan=new Scanner(System.in);

			      System.out.print("Per hour income of a Garment worker taka:");
			      double income=scan.nextDouble();


			      System.out.println();
			      System.out.print("Works in a day hour:");
			      int time=scan.nextInt();


			      Worker work;

			      Daysalary day=new Daysalary(income,time);

			      work=day;

			      work.calculateSalary();
			      System.out.println();

			      System.out.print("Per day income of a Garment worker:"+work.calculateSalary()+"taka");

		              System.out.println();

		              Monthsalary month=new Monthsalary(income,time);

			      work=month;

			      work.calculateSalary();
			      System.out.println();

			      System.out.println("Per month income of a Garment worker:"+work.calculateSalary()+"taka");

			      }
			      }
