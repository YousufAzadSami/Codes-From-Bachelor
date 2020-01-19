import java.util.Scanner;

public class GradeBookTest
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);


		GradeBook gradeBook1 = new GradeBook("Introduction to java programming :)");
		GradeBook gradeBook2 = new GradeBook("Introduction to Data structures!!! :D");

		System.out.printf("1.Initial course name is: %s\n\n", gradeBook1.getCourseName() );
		System.out.printf("2.Initial course name is: %s\n\n", gradeBook2.getCourseName() );

		gradeBook1.displayMessage();
		System.out.println();
		gradeBook2.displayMessage();
		System.out.println();


		/*System.out.println("Please enter the course name: ");

		String theName = input.nextLine();

		myGradeBook.setCourseName(theName);

		System.out.println();

		myGradeBook.displayMessage();

		/*System.out.println("Please enter the course name:");
		String nameOfCourse = input.nextLine();
		System.out.println();

		myGradeBook.displayMessage();*/

	}
}