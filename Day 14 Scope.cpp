

	// Add your code here
     Difference(vector<int> vt)
     {
         elements= vt;
     }
    void computeDifference()
    {
        sort(elements.begin(), elements.end());
  	  maximumDifference=elements[elements.size()-1]- elements[0];
    }
