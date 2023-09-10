#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    while(n--) {

        int course;
        cout << "\nEnter number of course: ";
        cin >> course;

        double score[course], credit[course];

        for(int i = 0; i < course; i++) {
            cout << "course number " << i + 1 << " :" << endl;

            cout << "score: ";
            cin >> score[i];
            cout << "credit: ";
            cin >> credit[i];
        }


        double sum_of_scores, sum_of_credits;
        sum_of_scores = sum_of_credits = 0;

        for(int i = 0; i < course; i++) {
            sum_of_scores += (score[i] * credit[i]);
            sum_of_credits += credit[i];
        }
        
        cout << "\nStudent's Average is : " << sum_of_scores / sum_of_credits << endl;

    }

	return 0;
}