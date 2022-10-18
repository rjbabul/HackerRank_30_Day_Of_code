

class Student :  public Person{
	private:
		vector<int> testScores;
	public:

        /*
        *   Class Constructor
        *
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here


         Student(string firstName, string lastName, int id, vector<int> scores):Person( firstName, lastName, id)
         {

            this->testScores= scores;
         }

         char calculate()
         {
            int sum=0,avg;
            for(int i=0;i<(int)testScores.size();i++)
            {
                sum+= testScores[i];
            }
            avg= sum/testScores.size();

               if( avg>=90 && avg<=100)
                    return 'O';

                if( avg>=80 && avg<90)
                    return 'E';
                if( avg>=70 && avg<80)
                    return 'A';
               if(avg>=55 && avg<70)
                    return 'P';
                if(avg>=40 && avg<55)
                    return 'D';

                    return 'T';

         }
        /*
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here

};

