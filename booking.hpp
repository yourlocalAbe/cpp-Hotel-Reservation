#include <iostream>
#include <string>

using namespace std;

class Booking {
    public:
        void book_room() {
            int option;
            int back;
            string proceed;

            cout << "We provide you many 3 Type of rooms that have different benefit in it. Please choose room type of your choice : \n"
                 << "1. Gold\n"
                 << "2. Silver\n"
                 << "3. Bronze\n"
                 << "4. Back to Home page\n\n"
                 << "Don't forget that you can see information for each room in Room Type page!\n";
            cin >> option;
                
                if (option == 1) {
                    cout << "The price for the gold room is 10.000$\n"
                         << "We dont provide online payment yet, but you can book the room first. proceed?y/n\n";
                    cin >> proceed;

                    if (proceed == "y") {
                        cout << "Thank you for trusting us! if you need any help please call our staff\n"
                             << "Abe 082226512712\n\n"
                             << "1. Back to Home page\n"
                             << "2. Exit\n";
                        cin >> back;

                        if (back == 1) {
                            return;
                        } else if (back == 2) {
                            cout << "Thank you and Goodbye!\n";
                        }
                    } else if (proceed == "n" ) {
                        cout << "1. Back to Home page\n"
                             << "2. Exit\n";
                        cin >> back;

                        if (back == 1) {
                            return;
                        } else if (back == 2) {
                            cout << "Thank you and Goodbye!\n";
                        }
                    }
                } else if (option == 2) {
                    cout << "The price for the Silver room is 7.999$\n"
                         << "We dont provide online payment yet, but you can book the room first. proceed?y/n\n";
                    cin >> proceed;

                    if (proceed == "y") {
                        cout << "Thank you for trusting us! if you need any help please call our staff\n"
                             << "Abe 082226512712\n\n"
                             << "1. Back to Home page\n"
                             << "2. Exit\n";
                        cin >> back;

                        if (back == 1) {
                            return;
                        } else if (back == 2) {
                            cout << "Thank you and Goodbye!\n";
                        }
                    } else if (proceed == "n" ) {
                        cout << "1. Back to Home page\n"
                             << "2. Exit\n";
                        cin >> back;

                        if (back == 1) {
                            return;
                        } else if (back == 2) {
                            cout << "Thank you and Goodbye!\n";
                        }
                    }
                } else if (option == 3) {
                    cout << "The price for the Bronze room is 5.999$\n"
                         << "We dont provide online payment yet, but you can book the room first. proceed?y/n\n";
                    cin >> proceed;

                    if (proceed == "y") {
                        cout << "Thank you for trusting us! if you need any help please call our staff\n"
                             << "Abe 082226512712\n\n"
                             << "1. Back to Home page\n"
                             << "2. Exit\n";
                        cin >> back;

                        if (back == 1) {
                            return;
                        } else if (back == 2) {
                            cout << "Thank you and Goodbye!\n";
                        }
                    } else if (proceed == "n" ) {
                        cout << "1. Back to Home page\n"
                             << "2. Exit\n";
                        cin >> back;

                        if (back == 1) {
                            return;
                        } else if (back == 2) {
                            cout << "Thank you and Goodbye!\n";
                        }
                    }
                } else if (option == 4) {
                    return;
                }
        }
};