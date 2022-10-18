

class Calculator {
    public :

     int power(int n, int p)
     {

         if(n < 0 || p < 0){
            throw invalid_argument("n and p should be non-negative");
            }
         int sum=1;
         for(int i=1;i<=p;i++) sum =sum*n;
         return sum;
     }
};
//Write your code here

