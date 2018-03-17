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

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
    Student (
            string firstName_,
            string lastName_,
            int identification_,
            vector<int> testScores_
        ) :
            Person(firstName_, lastName_, identification_),
            testScores(testScores_)
        {
            
        }
                       
  		// Write char calculate()
        char
        calculate (
            void
        ) {
            char letterGrade = '?';
            float average = 0.0;
            
            // Calculate average
            for (auto & score : testScores) {
                average += score;
            }
            average /= testScores.size();
            
            // Assign letter grade
            if (average >= 90.0) {
                letterGrade = 'O';
            } else if (average >= 80.0) {
                letterGrade = 'E';
            } else if (average >= 70.0) {
                letterGrade = 'A';
            } else if (average >= 55.0) {
                letterGrade = 'P';
            } else if (average >= 40.0) {
                letterGrade = 'D';
            } else {
                letterGrade = 'T';
            }
            
            return letterGrade;
        }
};
