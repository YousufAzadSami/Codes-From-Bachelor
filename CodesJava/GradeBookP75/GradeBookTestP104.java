import java.util.Scanner;

public class GradeBookTestP104
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);


		GradeBookP104 gradeBook1 = new GradeBookP104("Introduction to java programming :)", "MD Wasi ul Kabir");
		GradeBookP104 gradeBook2 = new GradeBookP104("Introduction to Data structures!!! :D" , "Sami Uddin Sarker");

		System.out.printf("1.Initial course name is: %s\n", gradeBook1.getCourseName() );
		System.out.printf("1.Initial Professor name is: %s\n\n",gradeBook1.getInstructorName() );
		System.out.printf("2.Initial course name is: %s\n", gradeBook2.getCourseName() );
		System.out.printf("2.Initial Professor name is: %s\n\n",gradeBook2.getInstructorName() );

		gradeBook1.displayMessage();
		System.out.println();
		gradeBook2.displayMessage();
		System.out.println();


		System.out.println("For course 1:\nPlease enter the course name: ");
		String theName = input.nextLine();
		gradeBook1.setCourseName(theName);

		System.out.println("Please enter the Professor name: ");
		String proName = input.nextLine();
		gradeBook1.setInstructorName(proName);

		System.out.println();

		gradeBook1.displayMessage();
		System.out.println();
		gradeBook2.displayMessage();
		System.out.println();

		/*System.out.println("Please enter the course name:");
		String nameOfCourse = input.nextLine();
		System.out.println();

		myGradeBook.displayMessage();*/

	}
}