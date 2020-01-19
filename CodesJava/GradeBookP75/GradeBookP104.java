public class GradeBookP104
{

		private String courseName,instructor;

		public GradeBookP104( String name, String insName )
		{
			courseName = name;
			instructor = insName;
		}


		public void setCourseName( String name )
		{
			courseName = name;
		}


		public String getCourseName()
		{
			return courseName;
		}

		public void setInstructorName(String insName)
		{
			instructor = insName;
		}

		public String getInstructorName()
		{
			return instructor;
		}


		public void displayMessage()
		{
			System.out.printf("Welcome to Grade Book for\n%s\nThis course is now presented by %s",getCourseName() , getInstructorName() );
		}


		//System.out.printf("welcome to the Grade Book ! ! !\n%s!\n",courseName);

}