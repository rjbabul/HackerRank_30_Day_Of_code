

// Write your MyBook class here

    //   Class Constructor
    //
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here


    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here

// End class

class MyBook
{
    string title;
    string author;
    int price;

    public:

      MyBook(string str, string st, int pr)
    {
        title= str;
        author=st;
        price = pr;
    }

    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
