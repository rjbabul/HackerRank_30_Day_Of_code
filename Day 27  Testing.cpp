
 class TestDataEmptyArray
{
  public :
       static vector<int> get_array()
    {
        return {};
    }
};


 class TestDataUniqueValues
{
  public :
       static vector<int> get_array()
    {
        return {8, 2,1, 9, 4};
    }
    static int get_expected_result()
    {
        return 2;
    }
};

class TestDataExactlyTwoDifferentMinimums
{
  public :
    static  vector<int> get_array()
    {

        return {8, 5, 2, 3,1, 4, 2,1};
    }
    static int get_expected_result()
    {
        return 4;
    }
};
