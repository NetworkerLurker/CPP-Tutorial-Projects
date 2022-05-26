#include <iostream>
using namespace std;

class Movie {
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating){ //setter
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }

        }

        string getRating(){ //getter
            return rating;
        }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    cout << avengers.getRating() << endl;

    return 0;
}